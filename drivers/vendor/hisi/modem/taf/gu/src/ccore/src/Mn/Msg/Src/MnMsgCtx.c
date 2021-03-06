
/******************************************************************************

                  版权所有 (C), 2001-2011, 华为技术有限公司

 ******************************************************************************
  文 件 名   : MNMsgCtx.c
  版 本 号   : 初稿
  作    者   : s62952
  生成日期   : 2012年03月03日
  最近修改   :
  功能描述   : MN msg CTX文件
  函数列表   :

  修改历史   :
  1.日    期   : 2012年03月03日
    作    者   : s62952
    修改内容   : 创建文件

******************************************************************************/

/*****************************************************************************
  1 头文件包含
*****************************************************************************/
#include "MnMsgCtx.h"


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
    协议栈打印打点方式下的.C文件宏定义
*****************************************************************************/
/*lint -e(767)*/
#define    THIS_FILE_ID        PS_FILE_ID_MN_MSG_CTX_C


/*****************************************************************************
  2 全局变量定义
*****************************************************************************/

/* MMC CTX,用于保存MMC状态机,描述表 */
MN_MSG_CONTEXT_STRU                    g_stMnMsgCtx;


/*****************************************************************************
   3 函数实现
*****************************************************************************/

/*****************************************************************************
 函 数 名  : MN_MSG_GetMmlCtx
 功能描述  : 获取当前MSG的CTX
 输入参数  : 无
 输出参数  : 无
 返 回 值  : 当前MSG的CTX
 调用函数  :
 被调函数  :

 修改历史      :
 1.日    期   : 2012年3月3日
   作    者   : s62952
   修改内容   : 新生成函数

*****************************************************************************/
MN_MSG_CONTEXT_STRU*  MN_MSG_GetMmlCtx( VOS_VOID )
{
    return &(g_stMnMsgCtx);
}

/*****************************************************************************
 函 数 名  : MN_MSG_GetCustomCfgInfo
 功能描述  : 获取MSG中保存特性定制特性信息
 输入参数  : 无
 输出参数  : 无
 返 回 值  : MSG中保存特性定制特性信息
 调用函数  :
 被调函数  :

 修改历史      :
 1.日    期   : 2012年3月3日
   作    者   : s62952
   修改内容   : 新生成函数

*****************************************************************************/
MN_MSG_CUSTOM_CFG_INFO_STRU* MN_MSG_GetCustomCfgInfo( VOS_VOID )
{
    return &(MN_MSG_GetMmlCtx()->stMsCfgInfo.stCustomCfg);
}


#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif



