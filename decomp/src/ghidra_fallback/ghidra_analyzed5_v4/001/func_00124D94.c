#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_004F7BB8(int param_1,int param_2);
extern int func_0058A7D4(void);
extern int func_0065650C(undefined4 *param_1,undefined1 param_2);
extern float DAT_00124e5c;

// USA 00124D94 <- EU 00124D94 (Ghidra, non-matching)
// GLOBAL DAT_00124e5c float

ushort func_00124D94(int param_1,int param_2)

{
  ushort uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  if ((((*(char *)(param_1 + 0x8c0) == '\x05' || *(char *)(param_1 + 0x8c0) == '\x04') &&
       (*(char **)(param_2 + 0x2c) != (char *)0x0)) && (**(char **)(param_2 + 0x2c) == '\x02')) &&
     ((uint)ALBW_AS_U32(DAT_00124e5c) <
      (uint)ALBW_AS_U32((*(float *)(param_1 + 0x374) * *(float *)(param_2 + 4) +
             *(float *)(param_1 + 0x378) * *(float *)(param_2 + 8) +
            *(float *)(param_1 + 0x37c) * *(float *)(param_2 + 0xc))))) {
    iVar4 = *(int *)(param_1 + 0x8ec);
    puVar2 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar2);
    *(uint *)(param_1 + 0x8ec) =
         (int)((ulonglong)uVar3 * 0x80000000 >> 0x20) + (iVar4 + 0x20000000U & 0xc0000000) +
         0x60000000 & 0xc0000000;
    func_0065650C((undefined4 *)(param_1 + 0x8bc),2);
  }
  uVar1 = func_004F7BB8(param_1,param_2);
  return uVar1;
}

