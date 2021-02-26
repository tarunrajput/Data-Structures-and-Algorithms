function PalindromeCreator(givenString) {
    if ((givenString === givenString.split('').reverse().join('')) && givenString.length>2){
        return 'Palindrome' 
    }
    
    for (let x = 0; x < givenString.length; x++) {
        const stringMinusOne = givenString.slice(0, x) + givenString.slice(x + 1);
        if ((stringMinusOne === stringMinusOne.split('').reverse().join('')) && stringMinusOne.length>2) {
          return givenString[x];
        }
    }

    for (let x = 0; x < givenString.length; x++) {
        const stringMinusOne = givenString.slice(0, x) + givenString.slice(x + 1);
        for (let y = x; y < stringMinusOne.length; y++) {
            const stringMinusTwo = stringMinusOne.slice(0, y) + stringMinusOne.slice(y + 1);
            if((stringMinusTwo === stringMinusTwo.split('').reverse().join('')) && stringMinusTwo.length>2){ 
                return givenString[x] + stringMinusOne[y];
            }
        }
    }
    return 'not possible';
}