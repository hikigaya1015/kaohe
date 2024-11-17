import numpy as np

def read_matrix(n):
    matrix = []
    print(f"请输入一个 {n}x{n} 的矩阵（每行输入 {n} 个数字，用空格分隔）：")
    for i in range(n):
        row = list(map(float, input().split()))
        if len(row) != n:
            raise ValueError("输入的矩阵不符合要求，每行必须有 {n} 个数字。")
        matrix.append(row)
    return np.array(matrix)

def main():
    try:
        n = int(input("请输入矩阵的大小 n："))
        if n <= 0:
            raise ValueError("矩阵的大小 n 必须是一个正整数。")

        matrix = read_matrix(n)
        
        # 计算逆矩阵
        inv_matrix = np.linalg.inv(matrix)
        
        print("矩阵的逆矩阵为：")
        print(inv_matrix)
    
    except np.linalg.LinAlgError:
        print("该矩阵不可逆（行列式为零）。")
    except ValueError as e:
        print(f"输入错误：{e}")

if __name__ == "__main__":
    main()