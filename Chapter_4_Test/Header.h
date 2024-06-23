#ifndef HEADER_H
#define HEADER_H
/// <summary>
/// ��������� ������������ ������ ����� ���� double.
/// </summary>
/// <returns>�������� ������������� �����</returns>
double getNum();

/// <summary>
/// ���������� ������������ ������ �������� +, -, * ��� /
/// </summary>
/// <returns>�������� ������������� ������ (���������������� +, -, * ��� /)</returns>
char getChar();

/// <summary>
/// �������� � ������� ��������� ��������
/// </summary>
/// <param name="a">������ �������</param>
/// <param name="b">������ �������</param>
/// <param name="ch">������ �������� (+, -, * ��� /)</param>
void getRes(double a, double b, char ch);
#endif