#include "ghidra_types.h"

extern int func_0014FD6C(int param_1,float *param_2,undefined4 param_3);
extern int func_004F864C(int param_1,undefined1 param_2);
extern int func_00661FE4(undefined4 *param_1,undefined1 param_2);
extern float DAT_002a1838;
extern undefined4 DAT_002a183c;

// USA 002A17C0 <- EU 002A179C (Ghidra, non-matching)
// GLOBAL DAT_002a1838 float
// GLOBAL DAT_002a183c undefined4

undefined4 func_002A17C0(int param_1,int param_2)

{
  undefined4 uVar1;
  float fVar2;
  _Alignas(8) unsigned char albw_frame[0x20];
  #define local_20 (*(float *)(albw_frame + 0x0))
  #define local_1c (*(undefined4 *)(albw_frame + 0x4))
  #define local_18 (*(float *)(albw_frame + 0x8))
  fVar2 = DAT_002a1838;
  uVar1 = 0;
  if ((*(uint *)(param_1 + 0x59c) & 0x100000) != 0) {
    *(float *)(param_1 + 0x900) = DAT_002a1838;
    func_004F864C(param_1,0xff);
    if (*(short *)(param_1 + 0x2c) == 1) {
      *(uint *)(param_1 + 0x59c) = *(uint *)(param_1 + 0x59c) | 0x1000;
    }
    else {
      if (param_2 != 0) {
        local_1c = DAT_002a183c;
        local_20 = fVar2;
        local_18 = fVar2;
        func_0014FD6C(param_1,&local_20,*(undefined4 *)(param_1 + 1000));
      }
      func_00661FE4((undefined4 *)(param_1 + 0x938),0);
    }
    uVar1 = 1;
  }
  return uVar1;
}

