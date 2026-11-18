#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_0017244C(int param_1,uint param_2);
extern int func_001D6738(undefined4 param_1);
extern int func_001D6FD0(undefined4 *param_1,uint param_2,int param_3,int *param_4,int param_5);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_004A2F38(int param_1,undefined4 *param_2);
extern int func_004F8638(int *param_1,undefined1 param_2);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int *DAT_003022c4;
extern int *DAT_003022d0;
extern int DAT_003022e4;
extern int *DAT_003022e8;
extern char s_Points_003022c8[];
extern char s_SE_PL_RUPEE_GET_003022d4[];

// USA 00302200 <- EU 003021DC (Ghidra, non-matching)
// GLOBAL DAT_003022c4 int *
// GLOBAL DAT_003022d0 int *
// GLOBAL DAT_003022e4 int
// GLOBAL DAT_003022e8 int *
// GLOBAL s_Points_003022c8 string
// GLOBAL s_SE_PL_RUPEE_GET_003022d4 string

/* WARNING: Variable defined which should be unmapped: objStack_20 */

undefined4 func_00302200(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_20 ((uint *)(albw_frame + 0x0))
  #define iStack_1c (*(int *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_004F8638(param_1,0xff);
  objStack_20[0] = 0xffffffff;
  func_001D6FD0(param_1 + 0xf4,2,5,DAT_003022c4,-1);
  puVar3 = (uint *)(param_1 + 0x23c);
  if (param_1[0xd1] == 0) {
    *puVar3 = 0;
    param_1[0x23d] = 0;
  }
  else {
    uVar1 = *puVar3;
    if ((uVar1 != 0) && (*(int *)(uVar1 + 0x1c) == param_1[0x23d])) {
      func_00110848(uVar1);
    }
    func_004A1B9C((int *)objStack_20,param_1[0xd1],(uint *)s_Points_003022c8);
    *puVar3 = objStack_20[0];
    param_1[0x23d] = iStack_1c;
  }
  iVar2 = param_1[0x23c];
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x1c) == param_1[0x23d])) {
    func_004A2F38(iVar2,param_1 + 0xf4);
  }
  uVar1 = func_001D6738(2);
  func_0017244C(*DAT_003022d0,uVar1);
  local_14 = s_SE_PL_RUPEE_GET_003022d4;
  local_18 = DAT_003022e4;
  return func_00587F74(*DAT_003022e8,&local_18,0);
}

