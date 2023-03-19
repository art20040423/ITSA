# ITSA-07
## 真複數運算(使用operator overloading)
itsa作業Q7張柏藝  
定義(operator overloading)：  
+：`(a + bi) + (c + di) = (a + c) + (b + d)i`  
-：`(a + bi) - (c + di) = (a−c) + (b − d)i`  
x：`(a + bi) (c+di) = (ac-bd) + (bc + ad)i`  
輸出格式：r i  

先輸入一個正整數(int n)，其後n列，依序為：運算元(char oper)、虛數1(int ar,ai)、虛數2(int br,bi)，將結果存入Complex c[]  
根據`switch (oper)`：  
當oper=+，執行a+b  
當oper=-，執行a-b  
當oper=x，執行ab  
(結果存入c[i])  
之後輸出c[i]，為r i(運算後的值)  
