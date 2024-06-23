#ifndef HEADER_H
#define HEADER_H

/// <summary>
/// ��������� ���������� �������
/// </summary>
constexpr double g_force{ 9.8 };

/// <summary>
/// ����� �� ����� �������
/// </summary>
constexpr int nul{ 0 }, one{ 1 }, two{ 2 }, three{ 3 }, four{ 4 }, five{ 5 }, six{ 6 }, seven{ 7 }, nine{ 9 }, ten{ 10 };

/// <summary>
/// �������� �������� ������������� ������
/// </summary>
/// <returns>������ �����, �������� ������������</returns>
double getHeight();

/// <summary>
/// ������������ ������ �� ����� ����� ����������� ����� ����� ������ �������
/// ������ �� �������: S=gt^2/2, ��� S - ���������� ������� (�����), g - ��������� ���������� ������ (9,8 �/�^2),
/// t - ����� ������� (�������)
/// </summary>
/// <param name="height">������ �����</param>
/// <param name="time">����� � �������</param>
/// <returns>������ ����� �������� ����� ������� (�����)</returns>
double calcHeight(double height, int time);

/// <summary>
/// ������� � ������� ������ �� ������� ��������� ��� � ����������� �����
/// </summary>
/// <param name="hight">������ �� ����� (�����)</param>
/// <param name="time">����� ����� ������ ������� (�������)</param>
void printRes(double hight, int time);

/// <summary>
/// ��������� (����� ������� calcHight) � �������� (����� ������� printRes) ����������
///  �� ����� ����� �������� ����� �������
/// </summary>
/// <param name="hight">������ �����</param>
/// <param name="time">����� �������</param>
void getRes(double hight, int time);

#endif
