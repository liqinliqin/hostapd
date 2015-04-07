/******************************************************************************

                  版权所有 (C), 2008-2012, 上海寰创通信科技有限公司

 ******************************************************************************
  文 件 名   : ac_probe_app.h
  版 本 号   : 初稿
  作    者   : wubin
  生成日期   : 2012年4月25日 星期三
  最近修改   :
  功能描述   : ac_probe_app.c 的头文件
  函数列表   :
  修改历史   :
  1.日    期   : 2012年4月25日 星期三
    作    者   : wubin
    修改内容   : 创建文件

******************************************************************************/
#ifndef __AC_PROBE_APP_H__
#define __AC_PROBE_APP_H__


#ifdef __cplusplus
#if __cplusplus
extern "C"{
#endif
#endif /* __cplusplus */
/*----------------------------------------------*
 * 包含头文件                                   *
 *----------------------------------------------*/
#include "ac_probe_public.h"
/*----------------------------------------------*
 * 外部变量说明                                 *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 外部函数原型说明                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 内部函数原型说明                             *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 全局变量                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 模块级变量                                   *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 常量定义                                     *
 *----------------------------------------------*/

/*----------------------------------------------*
 * 宏定义                                       *
 *----------------------------------------------*/


#if 0
extern SOCKET ac_probe_create_udp_sock( VOID );
#endif
extern UINT32 ac_probe_msg_send_ip( CHAR *pcMsg, 
                                             UINT32 usMsgLen, 
                                             UINT8 *pucIp );
extern UINT32 ac_probe_get_conf( VOID );
extern UINT32 ac_probe_msg_gettables_convert_msg( AC_PROBE_GETTABLES_RSP_MSG_T *pstRsp );
extern UINT32 ac_probe_msg_gettuples_convert_msg( AC_PROBE_GETTUPLES_RSP_MSG_T *pstRsp );


#ifdef __cplusplus
#if __cplusplus
}
#endif
#endif /* __cplusplus */


#endif /* __AC_PROBE_APP_H__ */
