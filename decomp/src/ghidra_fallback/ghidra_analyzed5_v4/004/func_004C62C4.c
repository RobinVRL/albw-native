#include "ghidra_types.h"

extern int func_003CF8C4(int *param_1,int param_2,uint *param_3);
extern int func_003D2210(undefined4 *param_1);
extern int func_003D2288(undefined4 *param_1,int param_2,undefined4 *param_3);
extern int func_003D231C(undefined4 *param_1);
extern int func_004C5DA8(int *param_1,int param_2,uint param_3,undefined4 *param_4);

// USA 004C62C4 <- EU 004C629C (Ghidra, non-matching)

void func_004C62C4(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x190];
  #define auStack_190 ((undefined4 *)(albw_frame + 0x0))
  #define local_122 (*(ushort *)(albw_frame + 0x6e))
  #define auStack_28 ((undefined4 *)(albw_frame + 0x168))
  #define auStack_20 ((undefined4 *)(albw_frame + 0x170))
  uVar3 = param_1[0xf0];
  uVar2 = 0;
  if (uVar3 != 0) {
    while( true ) {
      func_003D2210(auStack_190);
      uVar1 = func_004C5DA8(param_1,1,uVar2,auStack_190);
      bVar4 = uVar1 == 0;
      if (bVar4) {
        uVar1 = (uint)local_122;
      }
      if (bVar4 && uVar1 == param_2) break;
      uVar2 = uVar2 + 1;
      if (uVar3 <= uVar2) {
        return;
      }
    }
    func_003D231C(auStack_28);
    func_003D2288(auStack_20,(int)auStack_190,auStack_28);
    func_003CF8C4(param_1,1,auStack_28);
  }
  return;
}

