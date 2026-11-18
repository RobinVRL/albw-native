#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float func_00115DC8(float *param_1);
extern int func_00215B90(int param_1,float fparam_0);
extern int func_004D80A4(float *param_1,uint param_2,float fparam_0);
extern int func_0058A7D4(void);
extern int func_0065D9FC(undefined4 *param_1,undefined1 param_2);
extern int DAT_00214c44;
extern float DAT_00214c48;
extern float DAT_00214c4c;

// USA 00214B48 <- EU 00214B48 (Ghidra, non-matching)
// GLOBAL DAT_00214c44 int
// GLOBAL DAT_00214c48 float
// GLOBAL DAT_00214c4c float

undefined4 func_00214B48(int param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  float fparam_0;
  
  if (*(char *)(*(int *)(param_1 + 0x510) + 4) == '\0') {
    puVar3 = (undefined4 *)(param_1 + 0x8bc);
    if (0 < *(short *)(DAT_00214c44 + param_1)) {
      if (*(char *)(param_1 + 0xb3d) != '\0') {
        return func_0065D9FC(puVar3,2);
      }
      if (*(char *)(*(int *)(param_1 + 0x510) + 5) != '\x0f') {
        fparam_0 = DAT_00214c48;
        puVar1 = (uint *)func_0058A7D4();
        uVar2 = func_00111A64(puVar1);
        *(uint *)(param_1 + 0xa64) = uVar2;
        func_004D80A4((float *)(param_1 + 0x9fc),uVar2,DAT_00214c4c);
        *(float *)(param_1 + 0xa00) = fparam_0;
        func_00115DC8((float *)(param_1 + 0x9fc));
        *(float *)(param_1 + 0xa00) = fparam_0;
        func_00215B90(param_1,fparam_0);
        return func_0065D9FC(puVar3,6);
      }
      func_00215B90(param_1,DAT_00214c48);
      return func_0065D9FC(puVar3,4);
    }
    func_0065D9FC(puVar3,0xc);
  }
  return 0;
}

