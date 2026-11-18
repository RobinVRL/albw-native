#include "ghidra_types.h"

extern int func_0024FED0(int param_1);
extern int func_002500F4(int param_1);
extern int func_00556EAC(int param_1,int param_2);
extern int func_0065FBB4(undefined4 *param_1,undefined1 param_2);
extern int DAT_0024fc8c;
extern float DAT_0024fc90;
extern int *DAT_0024fc94;

// USA 0024FB38 <- EU 0024FB38 (Ghidra, non-matching)
// GLOBAL DAT_0024fc8c int
// GLOBAL DAT_0024fc90 float
// GLOBAL DAT_0024fc94 int *

void func_0024FB38(int param_1)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  bool bVar4;
  int iVar5;
  float fVar6;
  
  func_002500F4(param_1);
  if (*(char *)(param_1 + 0x491) != '\0') {
    if (*(char *)(param_1 + 0x492) == '\0') {
      *(undefined1 *)(param_1 + 0x492) = 1;
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x18) = *(undefined4 *)(param_1 + 0x464);
    }
    if (*(char *)(param_1 + 0x48e) != '\0') {
      fVar6 = *(float *)(*(int *)(*(int *)(param_1 + 0x488) + 0x14) + 8);
      if ((int)ALBW_AS_U32(fVar6) < DAT_0024fc8c) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x488) + 0x14);
        if (*(char *)(iVar5 + 0x1c) != '\0') goto LAB_0024fbf0;
        if (*(float *)(iVar5 + 0x10) < DAT_0024fc90) {
          if (DAT_0024fc90 < fVar6) goto LAB_0024fbf0;
        }
        else if (fVar6 != *(float *)(iVar5 + 0x14)) goto LAB_0024fbf0;
      }
      func_0024FED0(param_1);
    }
  }
LAB_0024fbf0:
  piVar3 = DAT_0024fc94;
  if (*(char *)(param_1 + 0x495) != '\0') {
    cVar1 = *(char *)(param_1 + 0x49e);
    if (*(uint *)(param_1 + 0x4a4) < 5) {
      if (((cVar1 == '\0') && (bVar4 = func_00556EAC(*DAT_0024fc94,0x54), !bVar4)) &&
         (bVar4 = func_00556EAC(*piVar3,0x55), !bVar4)) {
        *(undefined1 *)(param_1 + 0x49e) = 1;
      }
    }
    else {
      cVar2 = '\0';
      if (cVar1 != '\0') {
        cVar2 = *(char *)(param_1 + 0x48e);
      }
      if (cVar1 != '\0' && cVar2 != '\0') {
        *(undefined1 *)(param_1 + 0x49e) = 0;
      }
    }
  }
  bVar4 = *(char *)(param_1 + 0x493) != '\0';
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(param_1 + 0x49e);
  }
  if ((bVar4 && cVar1 != '\0') && (*(char *)(param_1 + 0x48e) == '\0')) {
    func_0065FBB4((undefined4 *)(param_1 + 0x41c),2);
  }
  return;
}

