// MAPFIX-INTEGRATED v1
#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_0014F510(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5 ,int param_6);
extern int func_0034CA24(undefined4 *param_1);
extern int func_004356B4(int *param_1);
extern int func_00556DC0(int param_1);
extern int func_00659400(undefined4 *param_1,undefined1 param_2);
extern int *DAT_0017ed00;
extern int DAT_0017ed04;

// USA 0017EBCC <- EU 0017EBCC (Ghidra, non-matching)
// GLOBAL DAT_0017ed00 int *
// GLOBAL DAT_0017ed04 int

/* WARNING: Variable defined which should be unmapped: objStack_18 */

void func_0017EBCC(int param_1)

{
  char cVar1;
  int *piVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define objStack_18 ((uint *)(albw_frame + 0x8))
  piVar2 = *(int **)(param_1 + 0xb44);
  if (piVar2 != (int *)0x0) {
    objStack_18[2] = *(uint *)(param_1 + 0x3d8);
    objStack_18[0] = *(uint *)(param_1 + 0x3d0);
    objStack_18[1] = (uint)ALBW_AS_U32((*(float *)(param_1 + 0x3d4) + *(float *)(param_1 + 0xaac)));
    func_00115C54((float *)objStack_18,(float *)objStack_18,(float *)(param_1 + 0xab0));
    piVar2[1] = objStack_18[0];
    piVar2[2] = objStack_18[1];
    piVar2[3] = objStack_18[2];
    func_004356B4(piVar2);
  }
  func_0034CA24(*(undefined4 **)(param_1 + 0xb98));
  if (*(uint *)(param_1 + 0x9ec) < *(uint *)(param_1 + 0x9f0)) {
    *(uint *)(param_1 + 0x9ec) = *(uint *)(param_1 + 0x9ec) + 1;
  }
  else {
    cVar1 = func_00556DC0(*DAT_0017ed00);
    if (cVar1 == '\0') {
      objStack_18[0] = 0;
      objStack_18[1] = 0;
      func_0014F510(param_1,*(undefined4 *)(param_1 + 0xb44),param_1 + 0xba4,0xe,0,0);
      if ((((**(int **)(param_1 + 0xb98) != 0) && ((short)(*(int **)(param_1 + 0xb98))[0xc] != 0))
          && (*(int *)(param_1 + 0xbe8) == 0)) &&
         ((cVar1 = *(char *)(DAT_0017ed04 + param_1), cVar1 != '\x06' && cVar1 != '\a' &&
          (cVar1 != '\b')))) {
        func_00659400((undefined4 *)(param_1 + 0x960),7);
      }
    }
  }
  return;
}

