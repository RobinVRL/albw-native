#include "ghidra_types.h"

extern int func_00104164(undefined4 *param_1,int param_2);
extern int func_00104338(uint param_1,int param_2);
extern int func_00106358(undefined4 *param_1,undefined4 param_2);
extern int func_00106370(undefined4 *param_1,undefined4 param_2);
extern int func_00108784(uint *param_1,byte *param_2);
extern int func_0010A7BC(int *param_1);
extern int func_0010C0C0(int *param_1);
extern int func_0010C160(int *param_1);
extern uint *DAT_00104668;
extern undefined4 *DAT_0010466c;
extern uint DAT_00104670;
extern int *DAT_00104674;
extern uint DAT_00104678;

// USA 00104560 <- EU 00104560 (Ghidra, non-matching)
// GLOBAL DAT_00104668 uint *
// GLOBAL DAT_0010466c undefined4 *
// GLOBAL DAT_00104670 uint
// GLOBAL DAT_00104674 int *
// GLOBAL DAT_00104678 uint

void func_00104560(byte *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 ((uint *)(albw_frame + 0x0))
  uVar3 = DAT_00104670;
  puVar2 = DAT_0010466c;
  puVar1 = DAT_00104668;
  while( true ) {
    piVar4 = DAT_00104674;
    func_0010C0C0(DAT_00104674);
    if ((*puVar1 != 0) || (uVar5 = func_00106358(DAT_00104668,puVar2[2]), -1 < (int)uVar5)) {
      uVar5 = 0;
    }
    if (-1 < (int)uVar5) break;
    bVar6 = uVar5 == uVar3;
    if (bVar6) {
      uVar5 = (uint)*param_1;
    }
    if (!bVar6 || uVar5 != 2) goto LAB_00104600;
    func_00104338(DAT_00104678,0);
    func_0010C160(piVar4);
  }
  func_00106370((undefined4 *)(param_1 + 0xc),*puVar2);
  local_20[0] = *puVar1;
  func_00108784(local_20,param_1);
  if (*puVar1 != 0) {
    software_interrupt(0x23);
    *puVar1 = puVar2[1];
  }
LAB_00104600:
  func_0010C160(piVar4);
  if (*param_1 != 2 && *param_1 != 5) {
    local_20[0] = 0;
    local_20[1] = 0;
    func_00104164(local_20,1);
    func_0010A7BC((int *)local_20);
  }
  return;
}

