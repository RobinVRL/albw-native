#include "ghidra_types.h"

extern int func_00115C54(float *param_1,float *param_2,float *param_3);
extern int func_00230610(int param_1,undefined4 param_2);
extern int func_002FCC74(int *param_1,undefined2 param_2);
extern int func_00520FC0(void);
extern int func_0065F6A4(undefined4 *param_1,undefined1 param_2);
extern int DAT_00249ae4;

// USA 00249A1C <- EU 00249A1C (Ghidra, non-matching)
// GLOBAL DAT_00249ae4 int

void func_00249A1C(int param_1)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  _Alignas(8) unsigned char albw_frame[0x30];
  #define afStack_28 ((float *)(albw_frame + 0x8))
  iVar2 = DAT_00249ae4;
  if (*(char *)(param_1 + 0x4b8) != '\0') {
    pfVar1 = (float *)func_00520FC0();
    func_00115C54(afStack_28,pfVar1,(float *)(iVar2 + 0x1c));
    iVar2 = (**(code **)(**(int **)(param_1 + 0x4dc) + 0x34))
                      (*(int **)(param_1 + 0x4dc),afStack_28,iVar2,0);
    if (iVar2 != 0) {
      iVar2 = 0;
      do {
        iVar3 = *(int *)(param_1 + 0x4e4 + iVar2 * 4);
        if (iVar3 != 0) {
          func_00230610(*(int *)(param_1 + 0x4dc),iVar3);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != 3);
      *(undefined1 *)(param_1 + 0x4b8) = 0;
      func_0065F6A4((undefined4 *)(param_1 + 0x488),1);
    }
  }
  if (*(char *)(param_1 + 0x4ba) != '\0') {
    func_002FCC74(*(int **)(param_1 + 0x4e0),0x3c);
    *(undefined1 *)(param_1 + 0x4ba) = 0;
  }
  return;
}

