#include "ghidra_types.h"

extern int func_00166C00(int param_1,int param_2);
extern int func_00457510(int param_1);
extern int func_0045918C(int param_1);
extern int func_00459388(int param_1);
extern int func_00532C78(int param_1);
extern int func_00587F74(int param_1,int *param_2,int param_3);
extern int func_0066D544(undefined4 *param_1,char param_2);
extern int *DAT_004595ec;
extern int *DAT_004595f0;
extern int DAT_00459600;
extern int *DAT_00459604;
extern char s_SE_S_DECIDE_004595f4[];

// USA 00459504 <- EU 004594DC (Ghidra, non-matching)
// GLOBAL DAT_004595ec int *
// GLOBAL DAT_004595f0 int *
// GLOBAL DAT_00459600 int
// GLOBAL DAT_00459604 int *
// GLOBAL s_SE_S_DECIDE_004595f4 string

undefined4 func_00459504(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(char * *)(albw_frame + 0xc))
  piVar1 = DAT_004595ec;
  if (*(char *)(*DAT_004595ec + 0xa4) == '\0') {
    uVar2 = *(uint *)(param_1 + 0x1c4);
    bVar4 = *(char *)(uVar2 + 0x8c) == '\0';
    if (bVar4) {
      uVar2 = (uint)*(byte *)(uVar2 + 0xa8);
    }
    if (bVar4 && uVar2 == 0) {
      piVar3 = (int *)(param_1 + 0x1e4);
      if (*(uint *)(param_1 + 0x214) < 3) {
        piVar3 = piVar3 + *(uint *)(param_1 + 0x214);
      }
      bVar4 = func_00532C78(*(int *)(*piVar3 + 0xfc) + 0x2c);
      if (!bVar4) {
        *(undefined1 *)(param_1 + 0x224) = 1;
      }
      func_00166C00(*piVar1,1);
    }
  }
  func_0045918C(param_1);
  if ((*(char *)(param_1 + 0x224) != '\0') &&
     ((*(uint *)(*DAT_004595f0 + (uint)*(byte *)(param_1 + 0x70) * 400 + 0x20) & 1) != 0)) {
    return func_00459388(param_1);
  }
  if (*(char *)(*(int *)(param_1 + 0x1c4) + 0x8c) != '\0') {
    func_00457510(param_1);
    func_0066D544((undefined4 *)(param_1 + 0x17c),'\x0f');
    local_14 = s_SE_S_DECIDE_004595f4;
    local_18 = DAT_00459600;
    func_00587F74(*DAT_00459604,&local_18,0);
  }
  return 0;
}

