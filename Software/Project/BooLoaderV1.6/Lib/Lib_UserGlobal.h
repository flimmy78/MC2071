//======================Copyright (c)=====================================
// �ļ�����: Lib_Global.H
// ��������:
//
// �޸ļ�¼:
//           2014-12-23, PiaoHong �����ļ�
//
//
//========================================================================

#ifndef _LIB_USER_GLOBAL_H_
#define _LIB_USER_GLOBAL_H_

//= Start ================================================================
#include "type.h"
//--------------------------------------------------------------
// ��������: abs16
// ��������: ��������ֵ֮��ľ��Բ�ֵ
// �������: ��
// ���ز���: ��
// �޸ļ�¼:
//           2014-04-09, PiaoHong ��������
//---------------------------------------------------------------
UNS16 abs16(INT16 v1,INT16 v2);


//--------------------------------------------------------------
// ��������: abs32
// ��������: ��������ֵ֮��ľ��Բ�ֵ
// �������: ��
// ���ز���: ��
// �޸ļ�¼:
//           2014-04-09, PiaoHong ��������
//---------------------------------------------------------------
UNS32 abs32(INT32 v1,INT32 v2);


//--------------------------------------------------------------
// ��������: GetChkSum
// ��������: �õ�����ļ����
// �������: UNS8 *Datas ����ָ�� UNS8 const DataCnt ���ݳ���
// ���ز���: �����
// �޸ļ�¼:
//           2009-11-18, PiaoHong ��������
//---------------------------------------------------------------
UNS16 GetChkSum(UNS8 *Datas, UNS16  DataCnt);

//--------------------------------------------------------------
// ��������: MemCopy
// ��������: �ڴ渴��
// �������: Դָ�� Ŀ��ָ��
// ���ز���: ��
// �޸ļ�¼:
//           2016-03-10, PiaoHong ��������
//---------------------------------------------------------------
void MemCopy(UNS8 *s,UNS8 *d,UNS16 len);

//--------------------------------------------------------------
// ��������: MemCompare
// ��������: �ڴ�Ƚ�
// �������: Դָ�� Ŀ��ָ��
// ���ز���: һ�� true
// �޸ļ�¼:
//           2016-03-10, PiaoHong ��������
//---------------------------------------------------------------
UNS8 MemCompare(UNS8 *s,UNS8 *d,UNS16 len);

//= end   ================================================================

#endif //_LIB_GLOBAL_H
