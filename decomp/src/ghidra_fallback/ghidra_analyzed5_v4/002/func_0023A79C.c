#include "ghidra_types.h"

extern int func_00100174(int *param_1);
extern int func_002FCC74(int *param_1,undefined2 param_2);
extern int func_00323994(undefined1 *param_1);
extern int func_0051C090(int param_1,undefined2 param_2,int param_3);
extern int func_005416A0(int param_1);
extern int func_005841A8(int param_1,undefined4 param_2,int *param_3);
extern int *DAT_0023a954;
extern int *DAT_0023a958;
extern uint *DAT_0023a95c;
extern undefined4 *DAT_0023a960;
extern undefined4 DAT_0023a964;
extern int *DAT_0023a968;
extern undefined4 *DAT_0023a96c;
extern int DAT_0023a970;
extern uint *DAT_0023a974;
extern undefined4 *DAT_0023a978;
extern undefined4 DAT_0023a97c;

// USA 0023A79C <- EU 0023A79C (Ghidra, non-matching)
// GLOBAL DAT_0023a954 int *
// GLOBAL DAT_0023a958 int *
// GLOBAL DAT_0023a95c uint *
// GLOBAL DAT_0023a960 undefined4 *
// GLOBAL DAT_0023a964 undefined4
// GLOBAL DAT_0023a968 int *
// GLOBAL DAT_0023a96c undefined4 *
// GLOBAL DAT_0023a970 int
// GLOBAL DAT_0023a974 uint *
// GLOBAL DAT_0023a978 undefined4 *
// GLOBAL DAT_0023a97c undefined4

undefined4 func_0023A79C(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(undefined4 *)(albw_frame + 0x8))
  piVar2 = DAT_0023a968;
  local_18 = param_4;
  if (*(char *)(param_1 + 0x4bc) == '\0') {
    if (*(char *)(param_1 + 0x4e1) != '\0') {
      *(undefined1 *)(param_1 + 0x4e1) = 0;
      puVar3 = (undefined4 *)func_005841A8(*piVar2,*DAT_0023a96c,*(int **)(DAT_0023a970 + *piVar2));
      puVar3 = (undefined4 *)*puVar3;
      if (((*DAT_0023a974 & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0023a974), iVar1 != 0)) {
        *DAT_0023a978 = DAT_0023a97c;
      }
      if ((puVar3 == (undefined4 *)0x0) ||
         (iVar1 = (**(code **)*puVar3)(puVar3,DAT_0023a978), iVar1 == 0)) {
        puVar3 = (undefined4 *)0x0;
      }
      return func_005416A0((int)puVar3);
    }
  }
  else {
    if (*(char *)(param_1 + 0x4bd) == '\0') {
      iVar1 = func_002FCC74(*(int **)(param_1 + 0x4b4),0);
      if (iVar1 != 0) {
        *(undefined1 *)(param_1 + 0x4bc) = 0;
      }
      return 0;
    }
    func_00323994((undefined1 *)&local_18);
    local_18 = CONCAT31((*(undefined4 *)((char *)&local_18 + 1) & 0xFFFFFF),1);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x4b8) + 0x48))
                      (*(int **)(param_1 + 0x4b8),0,&local_18,param_1 + 0x4ac);
    if (iVar1 != 0) {
      func_0051C090(*DAT_0023a958,(short)*(undefined4 *)(*DAT_0023a954 + 0x2cc),0);
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x4b8) + 0x40))(*(int **)(param_1 + 0x4b8));
      if (((*DAT_0023a95c & 1) == 0) && (iVar1 = func_00100174((int *)DAT_0023a95c), iVar1 != 0)) {
        *DAT_0023a960 = DAT_0023a964;
      }
      if ((piVar2 == (int *)0x0) ||
         (iVar1 = (**(code **)(*piVar2 + 8))(piVar2,DAT_0023a960), iVar1 == 0)) {
        piVar2 = (int *)0x0;
      }
      if (piVar2 != (int *)0x0) {
        *(undefined1 *)((int)piVar2 + 0x146) = 0;
      }
      *(undefined1 *)(param_1 + 0x4bd) = 0;
      *(undefined1 *)(param_1 + 0x4bc) = 0;
    }
  }
  return 0;
}

