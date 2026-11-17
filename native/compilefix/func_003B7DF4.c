/* USA 003B7DF4 <- EU 003B7DD0 (stage-2 Ghidra text) with dropped indirect-call arguments restored
 * (CLASS indirect call dropped arg, BOOT_LOG 129, tools/indirect_args_scan.py): vtable +0x138 (state change) at EU 003B7F4C: r2 = 1; mov r1, r2
 * (Ghidra printed (param_1,1)). */
#include "ghidra_types.h"

extern int func_00111A64(uint *param_1);
extern int func_003B8E10(int param_1);
extern int func_00543170(int param_1);
extern int func_0058A7D4(void);
extern float DAT_003b7f6c;

// USA 003B7DF4 <- EU 003B7DD0 (Ghidra, non-matching)
// GLOBAL DAT_003b7f6c float

undefined4 func_003B7DF4(int *param_1)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  
  *(undefined1 *)((int)param_1 + 0x62) = 0;
  *(undefined1 *)((int)param_1 + 99) = 0;
  iVar6 = param_1[0x12];
  iVar4 = *(int *)(*(int *)(iVar6 + 0x8dc) + 0x14);
  if (*(char *)(iVar4 + 0x1c) == '\0') {
    if (NAN(*(float *)(iVar4 + 0x10)) || NAN(DAT_003b7f6c)) {
      in_fpscr = in_fpscr & 0xfffffff | (uint)(*(float *)(iVar4 + 8) == DAT_003b7f6c) << 0x1e |
                 (uint)(DAT_003b7f6c <= *(float *)(iVar4 + 8)) << 0x1d;
      bVar1 = (byte)(in_fpscr >> 0x18);
      if ((bool)(bVar1 >> 5 & 1) && !(bool)(bVar1 >> 6)) goto LAB_003b7e3c;
    }
    else {
      in_fpscr = in_fpscr & 0xfffffff |
                 (uint)(*(float *)(iVar4 + 8) == *(float *)(iVar4 + 0x14)) << 0x1e;
      if (!SUB41(in_fpscr >> 0x1e,0)) goto LAB_003b7e3c;
    }
  }
  else {
LAB_003b7e3c:
    iVar4 = *(int *)(*(int *)(iVar6 + 0x8dc) + 0x14);
    fVar9 = ALBW_AS_F32(param_1[0x26]);
    fVar8 = *(float *)(iVar4 + 0x14) - *(float *)(iVar4 + 8);
    uVar3 = in_fpscr & 0xfffffff | (uint)(fVar8 < fVar9) << 0x1f | (uint)(fVar8 == fVar9) << 0x1e;
    in_fpscr = uVar3 | (uint)(NAN(fVar8) || NAN(fVar9)) << 0x1c;
    bVar1 = (byte)(uVar3 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      return 0;
    }
  }
  iVar4 = func_00543170(iVar6);
  if ((iVar4 == 0) && (*(char *)(iVar6 + 0xb40) != '\0')) {
LAB_003b7f4c:
                    /* WARNING: Could not recover jumptable at 0x003b7f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    return (**(code **)(*param_1 + 0x138))(param_1,1,1);
  }
  param_1[0x15] = param_1[0x15] + 1;
  uVar10 = (**(code **)(**(int **)(param_1[0x12] + 0xbcc) + 0x1c))(*(int **)(param_1[0x12] + 0xbcc));
  iVar5 = (int)((ulonglong)uVar10 >> 0x20);
  bVar7 = (int)uVar10 != 0;
  iVar4 = 0;
  iVar6 = 0;
  if (bVar7) {
    iVar6 = param_1[0x15];
    iVar5 = param_1[0x16];
    iVar4 = iVar5 - iVar6;
  }
  if ((bVar7 && iVar5 != iVar6) && iVar4 < 0 == (bVar7 && SBORROW4(iVar5,iVar6))) {
    puVar2 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar2);
    iVar4 = ALBW_AS_U32(VectorSignedToFloat((int)((ulonglong)uVar3 * 3 >> 0x20),(byte)(in_fpscr >> 0x15) & 3));
    param_1[0x26] = iVar4;
    return func_003B8E10((int)param_1);
  }
  *(undefined1 *)(param_1[0x12] + 0x936) = 1;
  *(undefined2 *)(param_1 + 0x24) = 0;
  if (*(char *)(param_1[0x12] + 0xc09) == '\0') {
    puVar2 = (uint *)func_0058A7D4();
    uVar3 = func_00111A64(puVar2);
    if ((0x32 < (uint)((ulonglong)uVar3 * 0x65 >> 0x20)) &&
       (iVar4 = (**(code **)(*param_1 + 0x134))(param_1), iVar4 == 0)) goto LAB_003b7f4c;
  }
                    /* WARNING: Could not recover jumptable at 0x003b7f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  return (**(code **)(*param_1 + 0x138))(param_1,2,1);
}

