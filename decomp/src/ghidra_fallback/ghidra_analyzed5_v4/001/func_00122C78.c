#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern float func_00115DC8(float *param_1);
extern int func_00120FBC(int param_1,undefined4 *param_2,float *param_3,undefined4 *param_4,undefined4 param_5, int param_6,float *param_7);
extern int func_00122688(int *param_1,undefined4 param_2,undefined4 param_3);
extern int func_001E8268(int param_1,int *param_2,undefined4 *param_3,undefined4 *param_4);
extern int *DAT_00122db4;
extern float DAT_00122db8;
extern undefined4 DAT_00122dbc;

// USA 00122C78 <- EU 00122C78 (Ghidra, non-matching)
// GLOBAL DAT_00122db4 int *
// GLOBAL DAT_00122db8 float
// GLOBAL DAT_00122dbc undefined4

/* WARNING: Variable defined which should be unmapped: objStack_3c */

void func_00122C78(int *param_1,undefined4 param_2,undefined4 param_3)

{
  _Alignas(8) unsigned char albw_frame[0x40]; /* entry_sp - 0x40 .. entry_sp + 0x0 */
#define stack0xffffffc0 (*(undefined4 *)(albw_frame + 0x0))
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int unaff_r6;
  #define objStack_3c ((uint *)(albw_frame + 0x4))
  #define local_30 (*(float *)(albw_frame + 0x10))
  #define local_2c (*(float *)(albw_frame + 0x14))
  #define uStack_28 (*(uint *)(albw_frame + 0x18))
  #define local_24 (*(float *)(albw_frame + 0x1c))
  #define local_20 (*(float *)(albw_frame + 0x20))
  #define uStack_1c (*(uint *)(albw_frame + 0x24))
  #define uStack_18 (*(uint *)(albw_frame + 0x28))
  piVar1 = DAT_00122db4;
  if (((char)param_1[0x25] != '\0') || (*param_1 == 0)) {
    return;
  }
  if (*(char *)((int)param_1 + 0x95) != '\0') {
    param_1[0x23] = (int)ALBW_AS_U32((ALBW_AS_F32(param_1[0x23]) + ALBW_AS_F32(param_1[0x24])));
    func_00122688(param_1,param_2,param_3);
    iVar3 = *(int *)(*piVar1 + 0x18);
    if (iVar3 == 0) {
      return;
    }
    func_00115C54(&local_30,(float *)(param_1 + 0x15),(float *)(param_1 + 0x1b));
    objStack_3c[0] = (uint)ALBW_AS_U32(local_30);
    objStack_3c[1] = (uint)ALBW_AS_U32(local_2c);
    objStack_3c[2] = uStack_28;
    func_001E8268(iVar3,param_1 + 1,objStack_3c,param_1 + 3);
    *(int *)(iVar3 + 0x160) = param_1[0x18];
    *(int *)(iVar3 + 0x164) = param_1[0x19];
    *(int *)(iVar3 + 0x168) = param_1[0x1a];
    func_00115DC8((float *)(iVar3 + 0x160));
    return;
  }
  iVar3 = *DAT_00122db4;
  if (iVar3 != 0) {
    unaff_r6 = *(int *)(iVar3 + 0x18);
  }
  if (iVar3 != 0 && unaff_r6 != 0) {
    local_2c = DAT_00122db8;
    uStack_28 = DAT_00122dbc;
    local_24 = DAT_00122db8;
    func_00115C54((float *)&stack0xffffffc0,(float *)(param_1 + 0x15),(float *)(param_1 + 0x1b));
    uStack_1c = objStack_3c[0];
    uStack_18 = objStack_3c[1];
    objStack_3c[0] = 0;
    objStack_3c[1] = (uint)&local_2c;
    iVar3 = func_00120FBC(unaff_r6,param_1 + 1,&local_20,param_1 + 3,0,0,&local_2c);
    if (iVar3 != 0) {
      uVar2 = 1;
      goto LAB_00122da8;
    }
  }
  uVar2 = 0;
LAB_00122da8:
  *(undefined1 *)((int)param_1 + 0x95) = uVar2;
  return;
}

