#include "ghidra_types.h"

extern int func_00165E28(int param_1,undefined2 param_2);
extern int func_00165F3C(int *param_1,int param_2);
extern int func_002FCC74(int *param_1,undefined2 param_2);
extern int func_004EFAE4(int param_1,int param_2);
extern int func_0051D530(int param_1,undefined4 *param_2);
extern int func_00588F08(int param_1);
extern int *DAT_0038c258;
extern int *DAT_0038c25c;

// USA 0038C150 <- EU 0038C12C (Ghidra, non-matching)
// GLOBAL DAT_0038c258 int *
// GLOBAL DAT_0038c25c int *

void func_0038C150(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  _Alignas(8) unsigned char albw_frame[0x50];
  #define uStack_48 (*(undefined4 *)(albw_frame + 0x8))
  #define local_44 (*(undefined4 *)(albw_frame + 0xc))
  #define local_40 (*(undefined4 *)(albw_frame + 0x10))
  if ((*(char *)(param_1 + 0x142) != '\0') && (iVar1 = func_004EFAE4(*DAT_0038c258,2), iVar1 != 0))
  {
    *(undefined1 *)(param_1 + 0x142) = 0;
    func_00165E28(*(int *)(*(int *)(param_1 + 0x2c) + 0x60),0);
  }
  piVar2 = DAT_0038c25c;
  if (*(char *)(param_1 + 0x144) != '\0') {
    local_44 = 0;
    local_40 = 0;
    func_0051D530(*(int *)(*DAT_0038c25c + 0x18),&uStack_48);
    piVar3 = *(int **)(*(int *)(param_1 + 0x2c) + 0x60);
    iVar1 = func_00588F08(*piVar2);
    (**(code **)(*piVar3 + 0x34))(piVar3,iVar1,&uStack_48,0);
    *(undefined1 *)(param_1 + 0x144) = 0;
    *(undefined1 *)(param_1 + 0x147) = 1;
  }
  if (*(char *)(param_1 + 0x145) != '\0') {
    func_002FCC74(*(int **)(*(int *)(param_1 + 0x2c) + 100),0x46);
    *(undefined1 *)(param_1 + 0x145) = 0;
    *(undefined1 *)(param_1 + 0x147) = 1;
  }
  if (*(char *)(param_1 + 0x146) != '\0') {
    piVar2 = *(int **)(*(int *)(param_1 + 0x2c) + 0x74);
    *(undefined1 *)((int)piVar2 + 0x275) = 1;
    func_00165F3C(piVar2,0);
    *(undefined1 *)(param_1 + 0x146) = 0;
    *(undefined1 *)(param_1 + 0x147) = 1;
  }
  if (*(char *)(param_1 + 0x149) != '\0') {
    piVar2 = *(int **)(*(int *)(param_1 + 0x2c) + 0x60);
    (**(code **)(*piVar2 + 0x38))(piVar2,0);
    *(undefined1 *)(param_1 + 0x147) = 1;
    *(undefined1 *)(param_1 + 0x149) = 0;
  }
  return;
}

