# ITSA-07
## 真複數運算(使用operator overloading)
itsa作業Q7張柏藝  
(x：乘號運算子)  
定義(operator overloading)：  
+：`(a + bi) + (c + di) = (a + c) + (b + d)i`  
-：`(a + bi) - (c + di) = (a−c) + (b − d)i`  
x：`(a + bi) (c+di) = (ac-bd) + (bc + ad)i`  
輸出運算後的r,i  

先輸入一個正整數(int n)，其後n列，依序為：運算元(char oper)、虛數1(int ar,ai)、虛數2(int br,bi)，Complex c[]  
經由switch判斷+,-,x來分別執行a+b,a-b,ab，再存入c[i]  
之後使用for迴圈連續輸出c[i]的值  
