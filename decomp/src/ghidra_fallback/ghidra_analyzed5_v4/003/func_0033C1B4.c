#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_0058791C(int param_1,int *param_2);
extern int func_00665E08(undefined4 *param_1,undefined1 param_2);
extern int DAT_0033c22c;
extern int *DAT_0033c230;
extern char s_SE_LightArrow_DAMAGE_0033c214[];
extern char s_SE_LightArrow_REFLECT_0033c234[];

// USA 0033C1B4 <- EU 0033C190 (Ghidra, non-matching)
// GLOBAL DAT_0033c22c int
// GLOBAL DAT_0033c230 int *
// GLOBAL s_SE_LightArrow_DAMAGE_0033c214 string
// GLOBAL s_SE_LightArrow_REFLECT_0033c234 string

undefined4 func_0033C1B4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(int *)(albw_frame + 0x0))
  #define local_1c (*(char * *)(albw_frame + 0x4))
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  iVar1 = DAT_0033c22c;
  if ((char)param_1[0x104] == '\x01' || (char)param_1[0x104] == '\x03') {
    local_1c = s_SE_LightArrow_DAMAGE_0033c214;
    local_20 = DAT_0033c22c;
    iVar3 = func_0058791C(*DAT_0033c230,&local_20);
    if (iVar3 != 1) {
      local_14 = s_SE_LightArrow_REFLECT_0033c234;
      local_18 = iVar1;
      func_00150A84(param_1,&local_18,0);
    }
    func_00665E08(param_1 + 0x103,4);
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

