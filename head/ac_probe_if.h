/******************************************************************************

                  ��Ȩ���� (C), 2008-2012, �Ϻ�徴�ͨ�ſƼ����޹�˾

 ******************************************************************************
  �� �� ��   : ac_probe_if.h
  �� �� ��   : ����
  ��    ��   : wubin
  ��������   : 2012��4��25�� ������
  ����޸�   :
  ��������   : ac_probe_if.c ��ͷ�ļ�
  �����б�   :
  �޸���ʷ   :
  1.��    ��   : 2012��4��25�� ������
    ��    ��   : wubin
    �޸�����   : �����ļ�

******************************************************************************/
#ifndef __AC_PROBE_IF_H__
#define __AC_PROBE_IF_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */
/*----------------------------------------------*
 * ����ͷ�ļ�                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * �ⲿ����˵��                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * �ⲿ����ԭ��˵��                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * �ڲ�����ԭ��˵��                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ȫ�ֱ���                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ģ�鼶����                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * ��������                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * �궨��                                       *
 *----------------------------------------------*/



extern VOID ac_probe_msg_gettables(UINT32 ulMsgLen, VOID *pvMsg);
extern VOID ac_probe_msg_gettuples(UINT32 ulMsgLen, VOID *pvMsg);
extern VOID ac_probe_msg_accessrecord(UINT32 ulMsgLen, VOID *pvMsg);
extern VOID ac_probe_msg_savedata(UINT32 ulMsgLen, VOID *pvMsg);
extern VOID ac_probe_msg_notify(UINT32 ulMsgLen, VOID *pvMsg);
extern VOID ac_probe_msg_loaddata(UINT32 ulMsgLen, VOID *pvMsg);
extern VOID ac_probe_msg_getindex(UINT32 ulMsgLen, VOID *pvMsg);


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __AC_PROBE_IF_H__ */