#include "ghidra_types.h"

extern int func_0012C718(int param_1);
extern float func_002317C0(undefined2 *param_1,float fparam_0);
extern int func_004816B4(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern uint DAT_00481670;
extern undefined DAT_00481674;
extern int DAT_00481684;
extern int *DAT_00481688;
extern char s__SE_S_COUNT_00481677[];
extern undefined4 _DAT_00481674;

// USA 004815F4 <- EU 004815CC (Ghidra, non-matching)
// GLOBAL DAT_00481670 uint
// GLOBAL DAT_00481674 undefined
// GLOBAL DAT_00481684 int
// GLOBAL DAT_00481688 int *

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 func_004815F4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  uVar2 = DAT_00481670;
  uVar1 = (uint)((int)((ulonglong)*(uint *)(param_1 + 0x90) * (ulonglong)DAT_00481670 >> 0x20) <<
                0x13) >> 0x18;
  func_004816B4(param_1);
  if ((uVar1 < 6) &&
     ((uint)((ulonglong)*(uint *)(param_1 + 0x90) * (ulonglong)uVar2 >> 0x25) < uVar1)) {
    func_002317C0((undefined2 *)(param_1 + 0x74),ALBW_AS_F32(_DAT_00481674));
    local_14 = s__SE_S_COUNT_00481677 + 1;
    local_18 = DAT_00481684;
    func_00587F74(*DAT_00481688,&local_18,0);
  }
  if ((-1 < *(int *)(param_1 + 0x94)) &&
     (iVar3 = *(int *)(param_1 + 0x94) + -1, *(int *)(param_1 + 0x94) = iVar3, iVar3 < 0)) {
    return func_0012C718(param_1);
  }
  return 0;
}

