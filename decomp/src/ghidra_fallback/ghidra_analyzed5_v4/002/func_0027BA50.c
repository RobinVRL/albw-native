#include "ghidra_types.h"

extern int func_003C7A70(undefined4 *param_1);
extern int func_00560EF8(int *param_1,int *param_2,uint *param_3);
extern int func_00561184(int param_1,uint *param_2,int param_3);
extern undefined DAT_0027bb1c;
extern uint DAT_0027bb20;

// USA 0027BA50 <- EU 0027BA78 (Ghidra, non-matching)
// GLOBAL DAT_0027bb1c undefined
// GLOBAL DAT_0027bb20 uint

undefined1 func_0027BA50(uint *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define local_48 ((uint *)(albw_frame + 0x8))
  #define local_24 (*(uint *)(albw_frame + 0x2c))
  #define aiStack_20 ((int *)(albw_frame + 0x30))
  func_003C7A70(aiStack_20);
  bVar1 = func_00560EF8(param_4,aiStack_20,(uint *)&DAT_0027bb1c);
  uVar2 = 0;
  if (bVar1) {
    iVar4 = 0;
    local_24 = DAT_0027bb20;
    do {
      iVar3 = func_00561184((int)aiStack_20,&local_24,iVar4);
      if (iVar3 != 0) {
        local_48[iVar4] = local_24;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 9);
    *param_1 = local_48[0];
    param_1[1] = local_48[1];
    param_1[2] = local_48[2];
    *param_2 = local_48[3];
    param_2[1] = local_48[4];
    param_2[2] = local_48[5];
    *param_3 = local_48[6];
    param_3[1] = local_48[7];
    param_3[2] = local_48[8];
    uVar2 = 1;
  }
  return uVar2;
}

