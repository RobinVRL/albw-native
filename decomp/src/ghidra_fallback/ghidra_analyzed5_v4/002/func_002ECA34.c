#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern float func_0058A404(int param_1);
extern int *DAT_002eca70;
extern float DAT_002eca74;

// USA 002ECA34 <- EU 002ECA10 (Ghidra, non-matching)
// GLOBAL DAT_002eca70 int *
// GLOBAL DAT_002eca74 float

undefined4 func_002ECA34(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  
  uVar2 = func_00111A64((uint *)(*DAT_002eca70 + 0x660));
  iVar3 = (int)((ulonglong)uVar2 * 100 >> 0x20);
  if (*(char *)(param_1 + 0xd3f) == '\0') {
    fVar7 = func_0058A404(param_1);
    bVar6 = SBORROW4((int)ALBW_AS_U32(fVar7),(int)ALBW_AS_U32(DAT_002eca74));
    iVar1 = (int)ALBW_AS_U32(fVar7) - (int)ALBW_AS_U32(DAT_002eca74);
    bVar5 = fVar7 == DAT_002eca74;
    if ((int)ALBW_AS_U32(fVar7) <= (int)ALBW_AS_U32(DAT_002eca74)) {
      bVar6 = SBORROW4((int)ALBW_AS_U32(fVar7),0x3f000000);
      iVar1 = (int)ALBW_AS_U32(fVar7) + -0x3f000000;
      bVar5 = fVar7 == 0.5;
    }
    bVar4 = iVar1 < 0;
    if (bVar5 || bVar4 != bVar6) {
      bVar6 = SBORROW4(iVar3,0x14);
      bVar4 = iVar3 + -0x14 < 0;
    }
    if (bVar4 == bVar6) {
      return 9;
    }
  }
  return 0xb;
}

