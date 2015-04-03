/******************************************************************************
* COPYRIGHT GBCOM
*******************************************************************************
* ��    ��:  ��Ƶ��Դ����ģ��/�¼�����ͷ�ļ�
* �޸���ʷ: 
* 2009-3-22     Ҷ����            �½�
*
******************************************************************************/

/******************************** ͷ�ļ�������ͷ *****************************/
#ifndef  __RRM_EVENT_H
#define  __RRM_EVENT_H

#ifdef __cplusplus
extern "C" {
#endif


/******************************** �궨�� *************************************/

/******************************** �ṹ�嶨�� *********************************/

/******************************** ȫ�ֱ������� ********************************/

/******************************** �ⲿ����ԭ������ ****************************/
int rrm_event_init(VOID) ;
int rrm_event_deinit(VOID) ;
int rrm_event_register(UINT16 event, int (* event_trigger)(WORD16, BYTE *, WORD16 , BYTE *, WORD16 , BYTE *)) ;
int rrm_event_unregister(UINT16 usEvent) ;
int rrm_event_trigger(WORD16 wEvent, BYTE *pbyBody, WORD16 wLen, BYTE *pbyResv, WORD16 wResv, BYTE *pbyProcData) ;


/********************************** ����ԭ������ ******************************/


#ifdef __cplusplus
}
#endif

#endif /* __RRM_EVENT_H */
/******************************* ͷ�ļ����� **********************************/