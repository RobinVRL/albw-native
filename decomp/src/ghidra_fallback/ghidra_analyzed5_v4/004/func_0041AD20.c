#include "ghidra_types.h"

extern int func_00413DF8(int param_1,undefined1 *param_2);
extern int func_00414BD8(int param_1,int param_2);
extern int func_00414BF8(int param_1);
extern int func_00414FF0(void);
extern int func_00415644(int param_1,int param_2);

// USA 0041AD20 <- EU 0041AD00 (Ghidra, non-matching)

void func_0041AD20(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int unaff_r6;
  uint uVar6;
  _Alignas(8) unsigned char albw_frame[0x90];
  #define local_90 ((undefined1 *)(albw_frame + 0x0))
  #define local_8c (*(uint *)(albw_frame + 0x4))
  #define local_88 (*(undefined4 *)(albw_frame + 0x8))
  if (*(char *)(param_1 + 0xd) == '\0') {
    uVar6 = 0;
    if (*(int *)(param_1 + 0x100) != 0) {
      do {
        iVar5 = param_1 + uVar6 * 0x24;
        if (*(char *)(iVar5 + 0x1b04) != '\0') {
          local_90[0] = *(undefined1 *)(param_1 + 0x80);
          iVar3 = 0;
          local_8c = (uint)*(byte *)(iVar5 + 0x1b10);
          local_88 = *(undefined4 *)(param_1 + 0x84);
          if (*(char *)(iVar5 + 0x1b10) != '\0') {
            do {
              iVar1 = *(int *)((char *)(iVar5 + 0x1b04) + iVar3 * 4 + 4);
              if (iVar1 != 0) {
                unaff_r6 = *(int *)(iVar1 + 0x30);
              }
              if (iVar1 != 0 && unaff_r6 != 0) {
                func_00413DF8(unaff_r6,local_90);
                func_00414BF8(unaff_r6);
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < (int)(uint)*(byte *)(iVar5 + 0x1b10));
          }
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x100));
    }
    uVar6 = (uint)(*(char *)(param_1 + 0xe) != '\0');
    if (*(char *)(param_1 + 0x54) != '\0') {
      uVar6 = 1;
    }
    if ((int)*(char *)(param_1 + 0x53) != uVar6) {
      uVar4 = 0;
      if (*(int *)(param_1 + 0xfc) != 0) {
        do {
          iVar5 = *(int *)(param_1 + uVar4 * 0x340 + 0x134);
          if (iVar5 != 0) {
            func_00414BD8(iVar5,uVar6);
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < *(uint *)(param_1 + 0xfc));
      }
      *(char *)(param_1 + 0x53) = (char)uVar6;
    }
    puVar2 = func_00414FF0();
    func_00415644((int)puVar2,param_1 + 0x44);
    *(undefined1 *)(param_1 + 0xd) = 1;
  }
  return;
}

