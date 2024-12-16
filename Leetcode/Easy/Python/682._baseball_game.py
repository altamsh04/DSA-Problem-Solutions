class Solution:
    def calPoints(self, operations: List[str]) -> int:
        if (len(operations) == 0):
            return 0

        rec = []
        for x in operations:
            if x == "C":
                rec.pop(-1)
            elif x == "D":
                rec.append(rec[-1] * 2)
            elif x == "+":
                rec.append(rec[-1] + rec[-2])
            else:
                rec.append(int(x))

        return sum(rec)
