/* USA 004A7058 (EU 004A7030): converted Ghidra text (build/decomp, round-3 stage 2) with one fix.
 * The factory call through *(*(this+0x1C)+0x10)'s vtable slot 0 lost its `this` (EU 004A7064..:
 * r0 = that object); the result (stored at +0x20) was garbage. Reached once the animation values
 * of 0069021C & co. were evaluated (boot stop 95c), during the title. Also the vtable slot 0 / 1
 * call (EU 004A7094..004A70BC) passes r2 = this[0x14] (param_3) and r3 = &out ([sp+4], preset
 * 21), which Ghidra dropped, and the result path tests out != 0 before returning 2 (EU 004A70C8..
 * 004A70E0). CLASS 1 (lost register arguments). Confidence: high. */
#include "ghidra_types.h"

extern int func_00110DDC(undefined4 *param_1,int param_2);
extern int func_0040E1BC(int param_1,undefined4 param_2,float fparam_0);
extern int func_004A71C4(int param_1);
extern int func_0057D86C(int *param_1);

// USA 004A7058 <- EU 004A7030 (Ghidra, non-matching)

undefined4 func_004A7058(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_18 (*(int *)(albw_frame + 0x8))
  #define local_14 (*(int *)(albw_frame + 0xc))
  #define local_10 (*(int *)(albw_frame + 0x10))
  #define local_c (*(int *)(albw_frame + 0x14))
  if (*(int *)(param_1 + 0x20) == 0) {
    piVar2 = (int *)(**(code **)**(undefined4 **)(*(int *)(param_1 + 0x1c) + 0x10))
                       (*(undefined4 **)(*(int *)(param_1 + 0x1c) + 0x10));
    *(int **)(param_1 + 0x20) = piVar2;
  }
  else {
    func_00110DDC((undefined4 *)(param_1 + 0x44),0);
    piVar2 = *(int **)(param_1 + 0x20);
  }
  if (piVar2 != (int *)0x0) {
    param_3 = *(int *)(param_1 + 0x14);
  }
  if (piVar2 != (int *)0x0 && param_3 != -1) {
    int out = 0x15; /* [sp+4]: out parameter of the vtable call, preset to 21 (EU 004A703C) */
    if (*(int *)(param_1 + 0x38) < 1) {
      iVar3 = (**(code **)*piVar2)(piVar2,param_1 + 0x44,param_3,&out);
    }
    else {
      iVar3 = (*(code *)((undefined4 *)*piVar2)[1])(piVar2,param_1 + 0x44,param_3,&out);
    }
    if (iVar3 != 0) {
      if (out != 0 && *(int *)(param_1 + 0x38) < 1) {
        uVar4 = 2;
      }
      else {
        func_004A71C4(param_1);
        bVar1 = func_0057D86C((int *)(param_1 + 0x44));
        if (bVar1) {
          if (*(int *)(param_1 + 0x44) != 0) {
            func_0040E1BC(*(int *)(param_1 + 0x44),0,*(float *)(param_1 + 0x28));
          }
          if (*(int *)(param_1 + 0x44) != 0) {
            *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xcc) = *(undefined4 *)(param_1 + 0x2c);
          }
          if (*(int *)(param_1 + 0x44) != 0) {
            *(undefined4 *)(*(int *)(param_1 + 0x44) + 0xd0) = *(undefined4 *)(param_1 + 0x30);
          }
        }
        local_14 = *(int *)(param_1 + 0x1c);
        piVar2 = *(int **)(*(int *)(local_14 + 8) + 0x24);
        if (piVar2 != (int *)0x0) {
          local_18 = param_1 + 8;
          local_10 = param_1 + 0x44;
          local_c = param_1;
          (**(code **)(*piVar2 + 4))(piVar2,&local_18);
        }
        uVar4 = 3;
      }
      return uVar4;
    }
  }
  return 4;
}

