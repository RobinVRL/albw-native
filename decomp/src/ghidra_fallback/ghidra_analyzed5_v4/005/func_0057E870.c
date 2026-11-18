#include "ghidra_types.h"

extern undefined8 func_0010E3C4(uint *param_1,uint *param_2,uint param_3);
extern int func_00561B30(int *param_1,uint *param_2,uint param_3,int param_4);
extern int func_006003D8(undefined4 param_1,int *param_2);
extern int func_00601378(int param_1);
extern int *DAT_0057e9b8;

// USA 0057E870 <- EU 0057E848 (Ghidra, non-matching)
// GLOBAL DAT_0057e9b8 int *

void func_0057E870(int param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint *in_r3;
  _Alignas(8) unsigned char albw_frame[0x10];
  #define local_10 (*(uint * *)(albw_frame + 0x0))
  if ((((((*DAT_0057e9b8 != *(int *)(param_1 + 0x1c)) ||
         ((char)DAT_0057e9b8[1] != *(char *)(param_1 + 0x20))) ||
        (*(char *)((int)DAT_0057e9b8 + 5) != *(char *)(param_1 + 0x21))) ||
       ((DAT_0057e9b8[2] != *(int *)(param_1 + 0x24) ||
        (DAT_0057e9b8[3] != *(int *)(param_1 + 0x28))))) ||
      ((DAT_0057e9b8[9] != *(int *)(param_1 + 0x40) ||
       (((char)DAT_0057e9b8[10] != *(char *)(param_1 + 0x44) ||
        (DAT_0057e9b8[0xb] != *(int *)(param_1 + 0x48))))))) ||
     ((DAT_0057e9b8[0xc] != *(int *)(param_1 + 0x4c) ||
      ((DAT_0057e9b8[0x10] != *(int *)(param_1 + 0x5c) ||
       (DAT_0057e9b8[0x11] != *(int *)(param_1 + 0x60))))))) {
    local_10 = in_r3;
    func_006003D8(0x208,(int *)&local_10);
    puVar2 = func_00561B30((int *)(param_1 + 0x1c),local_10,7,1);
    uVar3 = (int)puVar2 - (int)local_10;
    local_10 = puVar2;
    func_00601378(uVar3 & 0xfffffffc);
    piVar1 = DAT_0057e9b8;
    *DAT_0057e9b8 = *(int *)(param_1 + 0x1c);
    *(undefined1 *)(piVar1 + 1) = *(undefined1 *)(param_1 + 0x20);
    *(undefined1 *)((int)piVar1 + 5) = *(undefined1 *)(param_1 + 0x21);
    piVar1[2] = *(int *)(param_1 + 0x24);
    piVar1[3] = *(int *)(param_1 + 0x28);
    func_0010E3C4((uint *)(piVar1 + 4),(uint *)(param_1 + 0x2c),0x10);
    piVar1[9] = *(int *)(param_1 + 0x40);
    *(undefined1 *)(piVar1 + 10) = *(undefined1 *)(param_1 + 0x44);
    piVar1[0xb] = *(int *)(param_1 + 0x48);
    piVar1[0xc] = *(int *)(param_1 + 0x4c);
    piVar1[0xd] = *(int *)(param_1 + 0x50);
    *(undefined1 *)(piVar1 + 0xe) = *(undefined1 *)(param_1 + 0x54);
    piVar1[0x10] = *(int *)(param_1 + 0x5c);
    piVar1[0x11] = *(int *)(param_1 + 0x60);
  }
  return;
}

