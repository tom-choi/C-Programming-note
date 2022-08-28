// 数据结构与算法基础（青岛大学-王卓）.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
 
#include <iostream>
typedef struct 
{
    float realpart;
    float imagpart;
} Complex;

void assign(Complex* A, float real, float imag)
{
    A->realpart = real;
    A->imagpart = imag;
}

void add(Complex* C, Complex A, Complex B)
{
    C->realpart = A.realpart + A.realpart;
    C->imagpart = A.imagpart + B.imagpart;
}

void multiply(Complex* C, Complex A, Complex B)
{
    C->realpart = A.realpart * B.realpart + A.imagpart * B.imagpart;
    C->imagpart = A.realpart * B.imagpart + A.imagpart * B.realpart;
}

void divide(Complex* C, Complex A, Complex B)
{
    Complex *mutiplydown, *mutiplyup;
    Complex negative;

    assign(&negative, B.realpart, -B.imagpart);
    multiply(mutiplydown, B, negative);
    multiply(mutiplyup, A, negative);

    C->realpart = mutiplyup->realpart / mutiplydown->realpart;
    C->imagpart = mutiplyup->imagpart / mutiplydown->realpart;
}

int main()
{   
    Complex z1, z2, z3, z4, z;
    float RealPart, ImagPart;
    assign(&z1, 8.0, 6.0);
    assign(&z2, 4.0, 3.0);
    add(&z3, z1, z2);
    
}