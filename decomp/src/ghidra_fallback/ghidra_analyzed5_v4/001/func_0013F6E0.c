#include "ghidra_types.h"

extern int func_0013F1D0(int param_1,int param_2);
extern int func_0014064C(int param_1);
extern undefined4 func_00151148(int param_1,int param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern int func_004CF478(int param_1,int param_2);

// USA 0013F6E0 <- EU 0013F6E0 (Ghidra, non-matching)

undefined4 func_0013F6E0(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint in_fpscr;
  float fparam_0;
  
  *(int *)(param_1 + 0x50c) = *(int *)(param_1 + 0x50c) + -1;
  if ((*(char *)(param_1 + 0x51e) == '\0') &&
     (*(undefined1 *)(param_1 + 0x51e) = 1, *(char *)(param_1 + 0x51d) != '\0')) {
    func_004CF478(*(int *)(param_1 + 0x410),0);
    func_00151148(*(int *)(param_1 + 0x414),0);
    func_0013F1D0(param_1,1);
  }
  piVar3 = (int *)(*(int *)(param_1 + 0x47c) + *(char *)(param_1 + 0x464) * 8);
  uVar1 = *(uint *)(*(int *)(param_1 + 0x47c) + *(char *)(param_1 + 0x464) * 8 + 4);
  if ((uVar1 & 1) != 0) {
    piVar3 = (int *)(*piVar3 + *(int *)(*(int *)(param_1 + 0x474) + ((int)uVar1 >> 1)));
  }
  (*(code *)*piVar3)();
  iVar2 = *(int *)(param_1 + 0x460) + 1;
  *(int *)(param_1 + 0x460) = iVar2;
  if (*(int *)(param_1 + 0x470) != 0) {
    fparam_0 = (float)VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    func_00352210(*(int *)(param_1 + 0x470),1,fparam_0);
  }
  if (*(char *)(param_1 + 0x521) == '\0') {
    func_0014064C(param_1);
  }
  return 1;
}

