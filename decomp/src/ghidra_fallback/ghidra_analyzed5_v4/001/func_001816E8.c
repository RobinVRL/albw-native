#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_00181538(int param_1);
extern int func_001E6AB4(int param_1);
extern int func_004BDB20(int param_1);
extern int func_004EF418(int param_1,byte *param_2,int param_3,int param_4);
extern int func_00659400(undefined4 *param_1,undefined1 param_2);
extern int *DAT_001817c4;
extern int DAT_001817c8;

// USA 001816E8 <- EU 001816E8 (Ghidra, non-matching)
// GLOBAL DAT_001817c4 int *
// GLOBAL DAT_001817c8 int

undefined4 func_001816E8(int param_1)

{
  bool bVar1;
  int iVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 ((byte *)(albw_frame + 0x8))
  #define local_14 (*(undefined4 *)(albw_frame + 0xc))
  #define local_10 (*(undefined2 *)(albw_frame + 0x10))
  #define local_e (*(undefined1 *)(albw_frame + 0x12))
  func_001E6AB4(param_1);
  if (*(int *)(param_1 + 0xbe8) == 1) {
    bVar1 = func_00181538(param_1);
    if (bVar1) {
      *(undefined4 *)(param_1 + 0xbe8) = 2;
      func_00659400((undefined4 *)(param_1 + 0x960),6);
      goto LAB_00181730;
    }
    *(undefined4 *)(param_1 + 0xbe8) = 0;
  }
  else {
LAB_00181730:
    if (*(int *)(param_1 + 0xbe8) != 3) goto LAB_0018179c;
    local_18[0] = 0x10;
    local_10 = 0xf;
    local_e = 1;
    local_14 = 0;
    iVar2 = func_004EF418(*DAT_001817c4,local_18,2,0);
    if (iVar2 == 0) goto LAB_0018179c;
    func_00165E28(*(int *)(param_1 + 0xbe4),*(undefined2 *)(DAT_001817c8 + 0x2a));
    *(undefined1 *)(param_1 + 0xbee) = 0;
    *(undefined4 *)(param_1 + 0xbe8) = 4;
  }
  *(undefined4 *)(param_1 + 0xba0) = 0;
LAB_0018179c:
  if (*(char *)(param_1 + 0xbf3) == '\0') {
    return 0;
  }
  *(undefined1 *)(param_1 + 0xbf3) = 0;
  return func_004BDB20(param_1);
}

