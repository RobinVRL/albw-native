#include "ghidra_types.h"

extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00351BF0(int param_1,int param_2);
extern int func_004CF478(int param_1,int param_2);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_00588A88(int param_1,int *param_2,int param_3);
extern int *DAT_00284ee4;
extern int DAT_00284ee8;
extern int *DAT_00284efc;
extern float DAT_00284f00;
extern int DAT_00284f04;
extern undefined DAT_00284f08;
extern undefined4 DAT_00284f1c;
extern char s_SE_Rock_BREAK_00284eec[];
extern char s_cf_00284f0c[];
extern undefined4 _DAT_00284f08;

// USA 00284D7C <- EU 00284DA4 (Ghidra, non-matching)
// GLOBAL DAT_00284ee4 int *
// GLOBAL DAT_00284ee8 int
// GLOBAL DAT_00284efc int *
// GLOBAL DAT_00284f00 float
// GLOBAL DAT_00284f04 int
// GLOBAL DAT_00284f08 undefined
// GLOBAL DAT_00284f1c undefined4
// GLOBAL s_SE_Rock_BREAK_00284eec string

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_00284D7C(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float fparam_0;
  undefined4 uVar4;
  int iVar5;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  if (*(byte *)(param_1 + 0x9f0) < 3) {
    *(byte *)(param_1 + 0x9f0) = *(byte *)(param_1 + 0x9f0) + 1;
  }
  else {
    *(undefined1 *)(param_1 + 0x9f0) = 0;
  }
  iVar3 = DAT_00284ee8;
  piVar2 = DAT_00284ee4;
  cVar1 = *(char *)(param_1 + 0x9f0);
  *(undefined4 *)(param_1 + 0x9e8) = 0;
  fparam_0 = DAT_00284f00;
  if (cVar1 == '\0') {
    iVar5 = *(int *)(param_1 + 0x7a4);
    *(uint *)(iVar5 + 0x164) = *(uint *)(iVar5 + 0x164) | 0x40000000;
    *(undefined4 *)(param_1 + 0x994) = *(undefined4 *)(iVar5 + 0x8c);
    *(undefined4 *)(param_1 + 0x998) = *(undefined4 *)(iVar5 + 0x9c);
    *(undefined4 *)(param_1 + 0x99c) = *(undefined4 *)(iVar5 + 0xac);
    func_004D80A4((float *)(param_1 + 0x9a0),*(uint *)(DAT_00284f04 + 0x14),fparam_0);
    *(undefined4 *)(param_1 + 0x9a4) = _DAT_00284f08;
    local_14 = s_cf_00284f0c;
    local_18 = iVar3;
    return func_00588A88(*piVar2,&local_18,0);
  }
  if (cVar1 == '\x01') {
    *(undefined1 *)(param_1 + 0x919) = 1;
    if (*(int *)(param_1 + 0x7a4) != 0) {
      func_004CF478(*(int *)(param_1 + 0x7a4),0);
    }
    if (*(int *)(param_1 + 0x98c) != 0) {
      func_00151148(*(int *)(param_1 + 0x98c),0);
    }
    uVar4 = DAT_00284f1c;
    *(undefined4 *)(param_1 + 0x9a0) = DAT_00284f1c;
    *(undefined4 *)(param_1 + 0x9a4) = uVar4;
    *(undefined4 *)(param_1 + 0x9a8) = uVar4;
    return 0;
  }
  if (cVar1 == '\x02') {
    local_14 = s_SE_Rock_BREAK_00284eec;
    local_18 = iVar3;
    func_00588A88(*piVar2,&local_18,0);
    func_00351BF0(*(int *)(*DAT_00284efc + 0x18),0);
  }
  return 0;
}

