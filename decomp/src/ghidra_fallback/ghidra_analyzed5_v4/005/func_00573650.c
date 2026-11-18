#include "ghidra_types.h"

extern int func_005229AC(int *param_1,int *param_2);
extern int DAT_005736c4;
extern char s_P_MSword_00_005736ec[];
extern char s_P_MSword_01_005736e0[];
extern char s_P_MSword_02_005736d4[];
extern char s_P_Sword_00_005736c8[];

// USA 00573650 <- EU 00573628 (Ghidra, non-matching)
// GLOBAL DAT_005736c4 int
// GLOBAL s_P_MSword_00_005736ec string
// GLOBAL s_P_MSword_01_005736e0 string
// GLOBAL s_P_MSword_02_005736d4 string
// GLOBAL s_P_Sword_00_005736c8 string

undefined4 func_00573650(int param_1,int param_2)

{
  undefined4 uVar1;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(int *)(albw_frame + 0x0))
  #define local_c (*(char * *)(albw_frame + 0x4))
  if (param_2 == 2) {
    local_10 = DAT_005736c4;
    local_c = s_P_MSword_00_005736ec;
    uVar1 = func_005229AC(*(int **)(param_1 + 0x1c),&local_10);
    return uVar1;
  }
  if (param_2 != 3) {
    local_10 = DAT_005736c4;
    if (param_2 != 4) {
      local_c = s_P_Sword_00_005736c8;
      uVar1 = func_005229AC(*(int **)(param_1 + 0x1c),&local_10);
      return uVar1;
    }
    local_c = s_P_MSword_02_005736d4;
    uVar1 = func_005229AC(*(int **)(param_1 + 0x1c),&local_10);
    return uVar1;
  }
  local_10 = DAT_005736c4;
  local_c = s_P_MSword_01_005736e0;
  uVar1 = func_005229AC(*(int **)(param_1 + 0x1c),&local_10);
  return uVar1;
}

