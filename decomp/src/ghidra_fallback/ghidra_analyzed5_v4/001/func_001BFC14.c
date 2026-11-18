#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_001E4090(int param_1,undefined4 param_2);
extern int func_001E43F8(int param_1,float fparam_0);
extern int func_00324964(int param_1);
extern int func_0052FBA0(int param_1,uint param_2);
extern int *DAT_001bfd04;
extern uint *DAT_001bfd08;
extern undefined4 *DAT_001bfd0c;
extern undefined4 DAT_001bfd10;
extern int DAT_001bfd28;
extern float DAT_001bfd2c;
extern char s_SE_DoorChurch_CLOSE_001bfd14[];

// USA 001BFC14 <- EU 001BFC14 (Ghidra, non-matching)
// GLOBAL DAT_001bfd04 int *
// GLOBAL DAT_001bfd08 uint *
// GLOBAL DAT_001bfd0c undefined4 *
// GLOBAL DAT_001bfd10 undefined4
// GLOBAL DAT_001bfd28 int
// GLOBAL DAT_001bfd2c float
// GLOBAL s_SE_DoorChurch_CLOSE_001bfd14 string

void func_001BFC14(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  puVar1 = (undefined4 *)func_0052FBA0(*DAT_001bfd04 + 0x3dbbc,param_1[0xb3]);
  if (((*DAT_001bfd08 & 1) == 0) && (iVar2 = func_00100174((int *)DAT_001bfd08), iVar2 != 0)) {
    *DAT_001bfd0c = DAT_001bfd10;
  }
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,DAT_001bfd0c), iVar2 == 0)) {
    puVar1 = (undefined4 *)0x0;
  }
  if (puVar1 != (undefined4 *)0x0) {
    local_14 = s_SE_DoorChurch_CLOSE_001bfd14;
    local_18 = DAT_001bfd28;
    func_00150A84(param_1,&local_18,0);
  }
  *(undefined1 *)(param_1 + 0x125) = 0;
  func_001E4090((int)param_1,1);
  func_001E43F8((int)param_1,DAT_001bfd2c);
  if (*(short *)((int)param_1 + 0x2e) == 0) {
    func_00324964((int)param_1);
  }
  *(undefined1 *)(param_1[0x121] + 0x44) = 1;
  return;
}

