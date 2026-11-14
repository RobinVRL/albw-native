/* compilefix: USA 00220F20 (EU 00220F20), Ghidra-derived (build/ghidra_analyzed4).
 * Failed to compile: assigning to 'float' from incompatible type 'void'
 * Fixed (each an exact C form of the ARM operation; the rest is the converted Ghidra text):
 *  - calls of func_0065E398 (StateMgr::changeState(sm, s8), void, 2 arguments: native/robust/func_0065E398.c) whose result Ghidra used and to which it passed a phantom s0: plain 2-argument calls (r0 = sm, r1 = state as in the ARM, bl followed by pop {r4,pc}); the handler returns 0 like the converter's other exits. Bodies checked against the EU disassembly [1]
 *  - StateMgr state-handler call (pointer-to-member dispatch) lost its `this` in Ghidra's text: passed explicitly, r0 = *(sm+0x14) + (adj >> 1) (EU 00221044..00221080). Residual (medium): func_00220AE0 also reads r3 and s0, which hold leftovers of the preceding calls on the ARM; the Ghidra values (r3 = the StateMgr object word, s0 = last func_004FAD90 result, else 0.0f) are kept [1]
 *  - call to a callee the dump names FUN_<EU> (mapped to func_<USA> without a declaration; implicit int(...) would promote float args): extern prototype from the callee's Ghidra signature [1]
 * Confidence: high for the fixes (each class checked against the EU disassembly on sample sites);
 * the function body otherwise has the fidelity of the Ghidra output (bare `return;` exits of
 * functions retyped non-void return 0, as the converter does). */
#include "ghidra_types.h"
#include "compilefix.h"
/* callee named FUN_<EU> in the dump: prototype from its own Ghidra signature */
extern void func_004FC570(int *param_1);

extern int func_0021F564(int param_1);
extern int func_00220964(int param_1);
extern int func_00220AE0(int param_1,int param_2,undefined4 param_3,uint param_4,float fparam_0);
extern int func_00220BD0(int param_1,undefined4 param_2);
extern int func_00352210(int param_1,uint param_2,float fparam_0);
extern float func_004F48F0(int param_1);
extern float func_004F5588(int param_1);
extern int func_004F5BD8(int param_1,uint *param_2,int **param_3,float *param_4);
extern int func_004F70A8(int *param_1);
extern int func_004F8998(int *param_1,int param_2,char *param_3);
extern float func_004FAD90(int param_1);
extern int func_004FB0D8(int param_1,float *param_2);
extern int func_00588BF0(int param_1,int param_2);
void func_0065E398(char *sm, uint32_t newState); /* native/robust: StateMgr::changeState(sm, s8) */
extern int func_0065E4DC(undefined4 *param_1,int param_2);

// USA 00220F20 <- EU 00220F20 (Ghidra, non-matching)

undefined4 func_00220F20(int *param_1)

{
  char cVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  int *piVar8;
  int iVar9;
  float *pfVar10;
  uint in_fpscr;
  float in_s0 = 0.0f; /* s0 before the first float producer: see header */
  
  sVar2 = (short)param_1[0x142];
  if (sVar2 < 0x7b) {
    uVar7 = 2;
    if (sVar2 < 1) {
      uVar7 = 0;
    }
    *(undefined1 *)((int)param_1 + 0x859) = uVar7;
  }
  else if (sVar2 < 0xf5) {
    *(undefined1 *)((int)param_1 + 0x859) = 1;
  }
  if (((char)param_1[0x2bf] != '\0') && ((uint)param_1[0x29d] < (uint)param_1[0x29e])) {
    param_1[0x29d] = param_1[0x29d] + 1;
  }
  func_0021F564((int)param_1);
  if ((int)(short)param_1[0x142] - 0x1ccU < 100) {
    *(undefined1 *)(param_1 + 0x239) = 1;
  }
  else if ((uint)(int)(short)param_1[0x142] < 0x1cc) {
    if (((char)param_1[0x239] != '\x02') && (*(char *)((int)param_1 + 0xaff) == '\0')) {
      *(undefined1 *)((int)param_1 + 0xaff) = 1;
      cVar1 = (char)param_1[0x231];
      if ((cVar1 != '\x0f' && cVar1 != '\x10') && (cVar1 != '\x17' && cVar1 != '\x18')) {
        func_0065E4DC(param_1 + 0x230,0xf);
      }
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x239) = 0;
  }
  iVar4 = func_004F70A8(param_1);
  if (iVar4 != 0) {
    if (((char)param_1[0x231] != '\x17' && (char)param_1[0x231] != '\x18') &&
       (iVar4 = func_004F8998(param_1,0,(char *)0x0), iVar4 != 0)) {
      func_0065E398((char *)(param_1 + 0x230),0x17);
    }
    pfVar10 = (float *)param_1[0x235];
    piVar8 = (int *)(param_1[0x237] + (char)param_1[0x231] * 8);
    uVar5 = *(uint *)(param_1[0x237] + (char)param_1[0x231] * 8 + 4);
    if ((uVar5 & 1) != 0) {
      piVar8 = (int *)(*piVar8 + *(int *)((int)pfVar10 + ((int)uVar5 >> 1)));
    }
    /* StateMgr PMF dispatch: EU 00221068 r0 = obj(sm+0x14) + (adj >> 1) is the handler's this */
    (*(code *)*piVar8)((int)pfVar10 + ((int)uVar5 >> 1));
    iVar9 = param_1[0x234];
    iVar4 = param_1[0x230] + 1;
    param_1[0x230] = iVar4;
    if (iVar9 != 0) {
      in_s0 = (float)VectorUnsignedToFloat(iVar4,(byte)(in_fpscr >> 0x15) & 3);
      func_00352210(iVar9,1,in_s0);
    }
    if ((((char)param_1[0x2bf] != '\0') && ((uint)param_1[0x29e] <= (uint)param_1[0x29d])) &&
       (cVar1 = (char)param_1[0x231], (cVar1 != '\x0f' && cVar1 != '\x10') && cVar1 != '\x17')) {
      *(undefined1 *)(param_1 + 0x2bf) = 0;
      func_0065E4DC(param_1 + 0x230,0xf);
    }
    if (((*(char *)((int)param_1 + 0xafd) == '\0') && ((short)param_1[0xe] != 0)) &&
       (bVar3 = func_00588BF0((int)param_1,1), bVar3)) {
      func_0065E398((char *)(param_1 + 0x230),0);
      *(undefined1 *)((int)param_1 + 0xafd) = 1;
    }
    uVar5 = (uint)*(byte *)(param_1 + 0x231);
    if (uVar5 == 0x13) {
      func_004FC570(param_1);
    }
    else {
      in_s0 = func_004FAD90((int)param_1);
    }
    if (*(char *)((int)param_1 + 0xafd) == '\0') {
      in_s0 = func_004FAD90((int)param_1);
    }
    func_00220AE0((int)param_1,uVar5,iVar9,(uint)pfVar10,in_s0);
    switch(uVar5) {
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x14:
    case 0x17:
      uVar6 = param_1[0x167] | 0x30;
      break;
    default:
      uVar6 = param_1[0x167] & 0xffffffcf;
    }
    param_1[0x167] = uVar6;
    func_00220BD0((int)param_1,uVar5);
    func_004FB0D8((int)param_1,(float *)(param_1 + 0xf8));
    func_004F48F0((int)param_1);
    func_004F5588((int)param_1);
    func_004F5BD8((int)param_1,(uint *)0x0,(int **)0x0,pfVar10);
    return func_00220964((int)param_1);
  }
  return 0;
}

