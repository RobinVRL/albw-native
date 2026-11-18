#include "ghidra_types.h"

extern int func_00110848(int param_1);
extern int func_0016898C(int param_1,uint *param_2);
extern int func_002C11E8(int *param_1,undefined4 param_2,int param_3,undefined1 param_4);
extern int func_004A1B9C(int *param_1,int param_2,uint *param_3);
extern int func_005811E8(int *param_1);
extern undefined4 DAT_00226a68;
extern char s_ReactStun_00226a5c[];

// USA 002269A8 <- EU 002269A8 (Ghidra, non-matching)
// GLOBAL DAT_00226a68 undefined4
// GLOBAL s_ReactStun_00226a5c string

void func_002269A8(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x80];
  #define local_78 (*(int *)(albw_frame + 0x8))
  #define uStack_74 (*(undefined4 *)(albw_frame + 0xc))
  #define aiStack_70 ((int *)(albw_frame + 0x10))
  puVar1 = (uint *)func_002C11E8(aiStack_70,0xb,10,0);
  func_0016898C(*(int *)(param_1 + 0x68c),puVar1);
  piVar2 = (int *)(param_1 + 0x40c);
  iVar3 = func_005811E8(piVar2);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x344) == 0) {
      *piVar2 = 0;
      *(undefined4 *)(param_1 + 0x410) = 0;
    }
    else {
      iVar3 = *piVar2;
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0x1c) == *(int *)(param_1 + 0x410))) {
        func_00110848(iVar3);
      }
      func_004A1B9C(&local_78,*(int *)(param_1 + 0x344),(uint *)s_ReactStun_00226a5c);
      *piVar2 = local_78;
      *(undefined4 *)(param_1 + 0x410) = uStack_74;
    }
  }
  *(undefined4 *)(param_1 + 0x700) = DAT_00226a68;
  *(undefined1 *)(param_1 + 0x74e) = 0;
  *(undefined1 *)(param_1 + 0x5fd) = 0;
  return;
}

