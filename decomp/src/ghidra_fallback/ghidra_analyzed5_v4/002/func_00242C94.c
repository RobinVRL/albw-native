#include "ghidra_types.h"

extern int func_00150CD0(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_00581D60(int param_1);
extern int func_00588BE4(int param_1);
extern int func_00588BF0(int param_1,int param_2);
extern int func_0065F2D8(undefined4 *param_1,undefined1 param_2);
extern int *DAT_00242e90;
extern int *DAT_00242e94;
extern int *DAT_00242e98;
extern int *DAT_00242ea4;
extern int *DAT_00242ea8;
extern int *DAT_00242eb4;
extern int *DAT_00242eb8;
extern int *DAT_00242ebc;
extern int DAT_00242ec0;
extern char s_SE_Water_FALL_00242ec4[];
extern char s_Splash2_00242e9c[];
extern char s_Splash_00242eac[];

// USA 00242C94 <- EU 00242C94 (Ghidra, non-matching)
// GLOBAL DAT_00242e90 int *
// GLOBAL DAT_00242e94 int *
// GLOBAL DAT_00242e98 int *
// GLOBAL DAT_00242ea4 int *
// GLOBAL DAT_00242ea8 int *
// GLOBAL DAT_00242eb4 int *
// GLOBAL DAT_00242eb8 int *
// GLOBAL DAT_00242ebc int *
// GLOBAL DAT_00242ec0 int
// GLOBAL s_SE_Water_FALL_00242ec4 string
// GLOBAL s_Splash2_00242e9c string
// GLOBAL s_Splash_00242eac string

/* WARNING: Variable defined which should be unmapped: objStack_28 */

void func_00242C94(int param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define objStack_28 ((uint *)(albw_frame + 0x8))
  #define uStack_24 (*(undefined4 *)(albw_frame + 0xc))
  #define local_20 (*(int *)(albw_frame + 0x10))
  #define local_1c (*(char * *)(albw_frame + 0x14))
  #define local_18 (*(int *)(albw_frame + 0x18))
  #define local_14 (*(char * *)(albw_frame + 0x1c))
  iVar2 = func_00588BE4(param_1);
  if (((iVar2 == *DAT_00242e90) || (iVar2 = func_00588BE4(param_1), iVar2 == *DAT_00242e94)) ||
     (iVar2 = func_00588BE4(param_1), iVar2 == *DAT_00242e98)) {
    if (*(int *)(param_1 + 0x428) != 0) goto LAB_00242d74;
    iVar2 = *(int *)(param_1 + 0x344);
    pcVar3 = s_Splash2_00242e9c;
  }
  else {
    iVar2 = func_00588BE4(param_1);
    if (((iVar2 != *DAT_00242ea4) && (iVar2 = func_00588BE4(param_1), iVar2 != *DAT_00242ea8)) ||
       (*(int *)(param_1 + 0x428) != 0)) goto LAB_00242d74;
    iVar2 = *(int *)(param_1 + 0x344);
    pcVar3 = s_Splash_00242eac;
  }
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x42c) = 0;
  }
  else {
    func_004A1B9C((int *)objStack_28,iVar2,(uint *)pcVar3);
    *(uint *)(param_1 + 0x428) = objStack_28[0];
    *(undefined4 *)(param_1 + 0x42c) = uStack_24;
  }
LAB_00242d74:
  if ((((*(short *)(param_1 + 0x36) != 0) &&
       ((*(char *)(param_1 + 0x46c) != '\0' || (bVar1 = func_00588BF0(param_1,0), !bVar1)))) &&
      ((*(char *)(param_1 + 0x46c) != '\x01' || (bVar1 = func_00588BF0(param_1,0), bVar1)))) &&
     (*(int *)(param_1 + 0x418) != 0)) {
    func_0065F2D8((undefined4 *)(param_1 + 0x43c),4);
  }
  iVar2 = func_00588BE4(param_1);
  if (((iVar2 != *DAT_00242eb4) && (iVar2 = func_00588BE4(param_1), iVar2 != *DAT_00242eb8)) &&
     (iVar2 = func_00581D60(*DAT_00242ebc), local_18 = DAT_00242ec0,
     iVar2 == *(short *)(param_1 + 0x54))) {
    local_1c = s_SE_Water_FALL_00242ec4;
    local_20 = DAT_00242ec0;
    objStack_28[0] = 0;
    func_00150CD0(param_1,&local_20,param_1 + 0x3d0,0,0);
    if (*(int *)(param_1 + 0x428) != 0) {
      local_14 = s_SE_Water_FALL_00242ec4;
      objStack_28[0] = 0;
      func_00150CD0(param_1,&local_18,param_1 + 0x430,1,0);
    }
  }
  return;
}

