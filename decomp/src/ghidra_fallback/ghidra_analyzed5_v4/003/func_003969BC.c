#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_0039518C(int *param_1,float *param_2,int param_3);
extern int func_0058A7D4(void);

// USA 003969BC <- EU 00396998 (Ghidra, non-matching)

undefined4 func_003969BC(int *param_1,int param_2)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if (*(int *)(param_2 + 0x2c) != 0) {
    if (*(char *)(*(int *)(param_2 + 0x2c) + 1) == '\x06') {
      if (*(char *)(*param_1 + 0xe00) == '\r') {
        return 0;
      }
      puVar2 = (uint *)func_0058A7D4();
      uVar3 = func_00111A64(puVar2);
      if (((uint)((ulonglong)uVar3 * 0x65 >> 0x20) < 0x51) &&
         (iVar4 = (**(code **)(**(int **)(*(int *)(*param_1 + 0x93c) + 4) + 0x114))(*(int **)(*(int *)(*param_1 + 0x93c) + 4)), iVar4 != 0))
      {
        return 0;
      }
      if (*(int *)(param_2 + 0x2c) == 0) goto LAB_00396a34;
    }
    cVar1 = *(char *)(*(int *)(param_2 + 0x2c) + 1);
    if (cVar1 == '\x01' || cVar1 == '\x02') {
      return 0;
    }
    if (cVar1 == '\f' || cVar1 == '\x0f') {
      return 0;
    }
  }
LAB_00396a34:
  if ((((*(uint *)(param_2 + 0x24) & 0x8000) == 0) &&
      ((*(char *)(*param_1 + 0xe00) != '\r' || ((*(uint *)(param_2 + 0x24) & 0x20000) == 0)))) &&
     ((pcVar5 = *(char **)(param_2 + 0x2c), pcVar5 == (char *)0x0 ||
      ((*pcVar5 != '\x03' || (pcVar5[3] != '\x01')))))) {
    func_0039518C(param_1,(float *)(param_2 + 0x10),param_2);
    return 0;
  }
  return 0;
}

