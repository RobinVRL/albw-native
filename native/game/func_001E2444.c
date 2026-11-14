/* USA 001E2444: Ghidra text with one fix: the FileDevice::isExistFile call (00489CE0) lost its
 * 3rd argument (r2 = r6 = sp = the formatted "World/%s" SafeString, EU 001E247C / 001E24E4).
 * Rest unchanged. Confidence: high. */
#include "ghidra_types.h"

extern int func_0010C0B8(int param_1);
extern int func_0010EEE0(int param_1);
extern int func_00489CE0();
extern int func_00689650(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4);
extern int DAT_001e2528;
extern char s_World__s_001e251c[];

// USA 001E2444 <- EU 001E2444 (Ghidra, non-matching)
// GLOBAL DAT_001e2528 int
// GLOBAL s_World/%s_001e251c string

int * func_001E2444(int param_1,int *param_2,int param_3,undefined4 param_4)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  _Alignas(8) unsigned char albw_frame[0x130];
  #define auStack_128 ((undefined4 *)(albw_frame + 0x8))
  #define local_1c ((byte *)(albw_frame + 0x114))
  (**(code **)(*param_2 + 8))(param_2);
  func_00689650(auStack_128,s_World__s_001e251c,param_2[1],param_4);
  bVar1 = true;
  if ((param_3 < 0) || (*(int *)(param_1 + param_3 * 4 + 0x1fd4) == 0)) {
    piVar5 = *(int **)(DAT_001e2528 + param_1);
  }
  else {
    bVar1 = false;
    piVar5 = (int *)(*(int *)(param_1 + 0x1fd4 + param_3 * 4) + 0xe4);
  }
  iVar4 = 0;
  if (bVar1) {
    func_0010C0B8(param_1 + 0x1fb4);
    iVar4 = param_1 + 0x1fb4;
  }
  local_1c[0] = 0;
  iVar3 = func_00489CE0(piVar5,(int)local_1c,(int)auStack_128);  /* r2 = r6 = sp = the "World/%s" path */
  bVar2 = 0;
  if (iVar3 != 0) {
    bVar2 = local_1c[0];
  }
  if (iVar3 == 0 || bVar2 == 0) {
    piVar5 = (int *)0x0;
  }
  if (iVar4 != 0) {
    func_0010EEE0(iVar4);
  }
  return piVar5;
}

