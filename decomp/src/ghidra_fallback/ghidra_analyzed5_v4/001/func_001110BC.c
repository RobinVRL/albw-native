#include "ghidra_types.h"

extern float func_00111EA8(int param_1);
extern int func_0011224C(int param_1,int param_2);
extern int DAT_00111184;

// USA 001110BC <- EU 001110BC (Ghidra, non-matching)
// GLOBAL DAT_00111184 int

undefined4 func_001110BC(int *param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  
  piVar2 = param_1;
  if (param_2 != 0) {
    piVar2 = (int *)(uint)*(byte *)((int)param_1 + 0x9d);
  }
  if (param_2 != 0 && piVar2 != (int *)0x2) {
    cVar1 = (char)param_1[0x25];
    bVar3 = cVar1 == '\0';
    if (bVar3) {
      cVar1 = *(char *)((int)param_1 + 0x95);
    }
    if (!bVar3 || cVar1 != '\0') {
      fVar4 = func_00111EA8((int)(param_1 + 0x19));
      fVar5 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
      iVar6 = (int)(fVar4 * fVar5);
      iVar7 = DAT_00111184;
      fVar4 = func_00111EA8((int)(param_1 + 0x19));
      param_1[0x19] = (int)ALBW_AS_U32(fVar4);
      param_1[0x1a] = iVar7;
      param_1[0x1b] = iVar6;
      param_1[0x1c] = 0;
      *(undefined1 *)((int)param_1 + 0x99) = 0;
      if (param_1[4] != 0) {
        func_0011224C(param_1[4],(int)param_1);
      }
      (**(code **)(*param_1 + 0x24))(param_1);
      *(undefined1 *)((int)param_1 + 0x96) = 0;
      *(undefined1 *)((int)param_1 + 0x9d) = 0;
      *(undefined1 *)((int)param_1 + 0x9f) = 0;
      *(undefined1 *)((int)param_1 + 0x97) = 1;
      *(undefined1 *)((int)param_1 + 0x9e) = 0;
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00111180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x10))(param_1);
}

