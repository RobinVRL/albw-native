#include "ghidra_types.h"

extern int func_00150A84(int *param_1,int *param_2,int param_3);
extern int func_00168E9C(int *param_1,int param_2,int *param_3);
extern int func_00169A80(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4);
extern int func_00665B80(undefined4 *param_1,undefined1 param_2);
extern float DAT_00338190;
extern int DAT_003381ac;
extern char s_SE_SwitchSunlight_SHINE_00338194[];

// USA 00338100 <- EU 003380DC (Ghidra, non-matching)
// GLOBAL DAT_00338190 float
// GLOBAL DAT_003381ac int
// GLOBAL s_SE_SwitchSunlight_SHINE_00338194 string

void func_00338100(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  int iVar1;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  func_00169A80((int *)param_1[0x104],param_2,param_3,param_4);
  func_00168E9C((int *)param_1[0x104],param_1[0x103],(int *)0x0);
  iVar1 = *(int *)(param_1[0x104] + 0x14);
  if (*(char *)(iVar1 + 0x1c) == '\0') {
    if (*(float *)(iVar1 + 0x10) < DAT_00338190) {
      if (DAT_00338190 < *(float *)(iVar1 + 8)) {
        return;
      }
    }
    else if (*(float *)(iVar1 + 8) != *(float *)(iVar1 + 0x14)) {
      return;
    }
    func_00665B80(param_1 + 0x105,2);
    local_14 = s_SE_SwitchSunlight_SHINE_00338194;
    local_18 = DAT_003381ac;
    func_00150A84(param_1,&local_18,0);
  }
  return;
}

