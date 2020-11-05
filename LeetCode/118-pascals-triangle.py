def generate(self, num_rows: int):
    triangle = []

    for rowNum in range(num_rows):
        row = [None for _ in range(rowNum + 1)]
        row[0], row[-1] = 1, 1

        for j in range(1, len(row) - 1):
            row[j] = triangle[rowNum - 1][j - 1] + triangle[rowNum - 1][j]
        triangle.append(row)
    return triangle

print(generate(generate,5))