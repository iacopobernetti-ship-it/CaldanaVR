#include "pch-cpp.hpp"





template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker;
template <typename T1, typename T2>
struct VirtualActionInvoker2Invoker<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1* p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		void* params[2] = { p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct ConstrainedFuncInvoker1;
template <typename R, typename T1>
struct ConstrainedFuncInvoker1<R, T1*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1)
	{
		R ret;
		void* params[1] = { p1 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663;
struct HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEnumerator_1_tA4614FF03F28FE9389F626CD391BE5F840E13C00;
struct OKCNJOLDHEJ_tAADC2CDF139D0D6C447D57F4D77693A0D39EAF48;
struct PriorityQueue_2_t677ED62496B46B96F7A8174E9AA0764410A44CFB;
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E;
struct JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE;
struct JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct GCEFKAHILHI_t72762BF5102FC5D7C1DE8AA1AF97FCE629D7C651;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct String_t;
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;

IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral015D605F32698B0A0547B228A08659E95DAC9484;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE;
struct JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct OKCNJOLDHEJ_tD2C23987ADE94705468A04F3AC7E4CD2BE2D632A : public RuntimeObject {};
struct PriorityQueue_2_t677ED62496B46B96F7A8174E9AA0764410A44CFB  : public RuntimeObject
{
};
struct PriorityQueue_2_t9555CB0424B0996419B3956C602674744D97CFFE  : public RuntimeObject
{
};
struct Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E  : public RuntimeObject
{
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____array;
	int32_t ____head;
	int32_t ____tail;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663  : public PriorityQueue_2_t677ED62496B46B96F7A8174E9AA0764410A44CFB
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* ___ODDLHPPPHME;
	int32_t ___BDAICNLNLCB;
	int32_t ___EOLMCKGJILD;
	RuntimeObject* ___JFJKJMPDHBP;
};
struct HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30  : public PriorityQueue_2_t9555CB0424B0996419B3956C602674744D97CFFE
{
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* ___ODDLHPPPHME;
	int32_t ___BDAICNLNLCB;
	int32_t ___EOLMCKGJILD;
	RuntimeObject* ___JFJKJMPDHBP;
};
typedef Il2CppFullySharedGenericStruct JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD;
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 
{
	GCEFKAHILHI_t72762BF5102FC5D7C1DE8AA1AF97FCE629D7C651* ___AJLJKMFIAAE;
	int32_t ___CKADLHFNLAD;
	int32_t ___MLKJHNFOMHM;
	int32_t ___KMAFFIDLGPG;
};
struct GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281_marshaled_pinvoke
{
	GCEFKAHILHI_t72762BF5102FC5D7C1DE8AA1AF97FCE629D7C651* ___AJLJKMFIAAE;
	int32_t ___CKADLHFNLAD;
	int32_t ___MLKJHNFOMHM;
	int32_t ___KMAFFIDLGPG;
};
struct GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281_marshaled_com
{
	GCEFKAHILHI_t72762BF5102FC5D7C1DE8AA1AF97FCE629D7C651* ___AJLJKMFIAAE;
	int32_t ___CKADLHFNLAD;
	int32_t ___MLKJHNFOMHM;
	int32_t ___KMAFFIDLGPG;
};
struct JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC 
{
	float ___priority;
	GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 ___element;
};
struct OKCNJOLDHEJ_tAADC2CDF139D0D6C447D57F4D77693A0D39EAF48  : public RuntimeObject
{
	HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* ___EIJMMHDKNAD;
	HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* ___FIBGCPDCOHF;
	GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 ___JELICKLCCFA;
	bool ___AGFBNNBIFGD;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE  : public RuntimeArray
{
	ALIGN_FIELD (8) JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC m_Items[1];

	inline JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___element))->___AJLJKMFIAAE), (void*)NULL);
	}
	inline JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)&((&((m_Items + index)->___element))->___AJLJKMFIAAE), (void*)NULL);
	}
};
struct JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_gshared (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KCOHELBPKLG_m3D60EC054CFCEC0FC77D0E4026EEEA58DD18BC71_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EAECNLBGBJE_m4791EB5EA21723B3FB2F5ECB3333F8E06B07D54A_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JEAAKABOFDI__ctor_m1C973E0B6842D1B23CB1177FCF085964374BA13A_gshared (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC* __this, float ___0_p, GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 ___1_e, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PriorityQueue_2__ctor_mEF61F7D2004D4262870C36DF5A9E5B85F10FD7FD_gshared (PriorityQueue_2_t677ED62496B46B96F7A8174E9AA0764410A44CFB* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OKCNJOLDHEJ__ctor_m967C6BD37D30247EDE2692464ABB34443838C5CC_gshared (OKCNJOLDHEJ_tAADC2CDF139D0D6C447D57F4D77693A0D39EAF48* __this, HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* ___0_original, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2__ctor_m3A17B61F29A09660C50361DFD7F23889915A1F17_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_OHLPGKNKGAN, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void JEAAKABOFDI__ctor_m29633D9D0773783D83CB92291702A710DD653DE9_gshared (JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD* __this, Il2CppFullySharedGenericAny ___0_p, Il2CppFullySharedGenericAny ___1_e, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA (RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149 (RuntimeObject* ___0_obj, bool* ___1_lockTaken, const RuntimeMethod* method) ;
inline void HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300 (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method)
{
	((  void (*) (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663*, int32_t, int32_t, const RuntimeMethod*))HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300_gshared)(__this, ___0_PKIIEEGPFLH, ___1_IILFFHPFEBP, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F (float* __this, float ___0_value, const RuntimeMethod* method) ;
inline void Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_gshared)(__this, method);
}
inline void Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, int32_t ___0_item, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, int32_t, const RuntimeMethod*))Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_gshared)(__this, ___0_item, method);
}
inline int32_t Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650 (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F (float* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D (RuntimeObject* __this, RuntimeObject* ___0_obj, const RuntimeMethod* method) ;
inline void HeapPriorityQueue_2_KCOHELBPKLG_m3D60EC054CFCEC0FC77D0E4026EEEA58DD18BC71 (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method)
{
	((  void (*) (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663*, int32_t, const RuntimeMethod*))HeapPriorityQueue_2_KCOHELBPKLG_m3D60EC054CFCEC0FC77D0E4026EEEA58DD18BC71_gshared)(__this, ___0_PKIIEEGPFLH, method);
}
inline int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*, const RuntimeMethod*))Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline)(__this, method);
}
inline void HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4 (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method)
{
	((  void (*) (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663*, int32_t, const RuntimeMethod*))HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4_gshared)(__this, ___0_JEPACBANOJJ, method);
}
inline void HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56 (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method)
{
	((  void (*) (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663*, int32_t, const RuntimeMethod*))HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56_gshared)(__this, ___0_JEPACBANOJJ, method);
}
inline void HeapPriorityQueue_2_EAECNLBGBJE_m4791EB5EA21723B3FB2F5ECB3333F8E06B07D54A (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method)
{
	((  void (*) (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663*, const RuntimeMethod*))HeapPriorityQueue_2_EAECNLBGBJE_m4791EB5EA21723B3FB2F5ECB3333F8E06B07D54A_gshared)(__this, method);
}
inline void JEAAKABOFDI__ctor_m1C973E0B6842D1B23CB1177FCF085964374BA13A (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC* __this, float ___0_p, GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 ___1_e, const RuntimeMethod* method)
{
	((  void (*) (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC*, float, GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281, const RuntimeMethod*))JEAAKABOFDI__ctor_m1C973E0B6842D1B23CB1177FCF085964374BA13A_gshared)(__this, ___0_p, ___1_e, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
inline void PriorityQueue_2__ctor_mEF61F7D2004D4262870C36DF5A9E5B85F10FD7FD (PriorityQueue_2_t677ED62496B46B96F7A8174E9AA0764410A44CFB* __this, const RuntimeMethod* method)
{
	((  void (*) (PriorityQueue_2_t677ED62496B46B96F7A8174E9AA0764410A44CFB*, const RuntimeMethod*))PriorityQueue_2__ctor_mEF61F7D2004D4262870C36DF5A9E5B85F10FD7FD_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void OKCNJOLDHEJ__ctor_m967C6BD37D30247EDE2692464ABB34443838C5CC (OKCNJOLDHEJ_tAADC2CDF139D0D6C447D57F4D77693A0D39EAF48* __this, HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* ___0_original, const RuntimeMethod* method)
{
	((  void (*) (OKCNJOLDHEJ_tAADC2CDF139D0D6C447D57F4D77693A0D39EAF48*, HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663*, const RuntimeMethod*))OKCNJOLDHEJ__ctor_m967C6BD37D30247EDE2692464ABB34443838C5CC_gshared)(__this, ___0_original, method);
}
inline void HeapPriorityQueue_2__ctor_m3A17B61F29A09660C50361DFD7F23889915A1F17 (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_OHLPGKNKGAN, const RuntimeMethod* method)
{
	((  void (*) (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663*, int32_t, const RuntimeMethod*))HeapPriorityQueue_2__ctor_m3A17B61F29A09660C50361DFD7F23889915A1F17_gshared)(__this, ___0_OHLPGKNKGAN, method);
}
inline void JEAAKABOFDI__ctor_m29633D9D0773783D83CB92291702A710DD653DE9 (JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD* __this, Il2CppFullySharedGenericAny ___0_p, Il2CppFullySharedGenericAny ___1_e, const RuntimeMethod* method)
{
	((  void (*) (JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, const RuntimeMethod*))JEAAKABOFDI__ctor_m29633D9D0773783D83CB92291702A710DD653DE9_gshared)((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)__this, ___0_p, ___1_e, method);
}
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 31723
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PKDFEHOBOBL_m46A669247129C175C04CEE060F1EA7D3D1827B84_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0046;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0046:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				V_2 = 0;
				goto IL_002b_1;
			}

IL_0015_1:
			{
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
				int32_t L_5 = V_2;
				NullCheck(L_4);
				il2cpp_codegen_initobj(((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), sizeof(JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC));
				int32_t L_6 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
			}

IL_002b_1:
			{
				int32_t L_7 = V_2;
				int32_t L_8 = __this->___BDAICNLNLCB;
				if ((((int32_t)L_7) < ((int32_t)L_8)))
				{
					goto IL_0015_1;
				}
			}
			{
				__this->___BDAICNLNLCB = 0;
				goto IL_0047;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		return;
	}
}
// Method Definition Index: 31724
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DKGNPNGCGNE_mA7EA06633B19317057D1E3ED2F82805098265B2C_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/1));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31725
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GBFABLFNDOM_m3EFE7C4DFEF8A89376D59CE6959A6E9FB90012F3_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 ___0_CAFHADGPHEN, float ___1_CPIDBPOGGJM, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* V_2 = NULL;
	int32_t V_3 = 0;
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0104:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_010d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_010d:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				int32_t L_4 = __this->___BDAICNLNLCB;
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_010e;
			}

IL_001e_1:
			{
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_5 = (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*)il2cpp_codegen_object_new(Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
				Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D(L_5, Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
				V_2 = L_5;
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_6 = V_2;
				NullCheck(L_6);
				Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_6, 0, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
				goto IL_00f7_1;
			}

IL_0030_1:
			{
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_7 = V_2;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650(L_7, Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
				V_3 = L_8;
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
				V_4 = L_12;
				float* L_13 = (float*)(&(&V_4)->___priority);
				float L_14 = ___1_CPIDBPOGGJM;
				float L_15 = L_14;
				RuntimeObject* L_16 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), &L_15);
				bool L_17;
				L_17 = Single_Equals_mC2B8FFE9D39B98FA2108771CCAFEC580873D054F(L_13, L_16, il2cpp_rgctx_method(method->klass->rgctx_data, 7));
				if (!L_17)
				{
					goto IL_0085_1;
				}
			}
			{
				GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281* L_18 = (GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281*)(&(&V_4)->___element);
				GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 L_19 = ___0_CAFHADGPHEN;
				GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 L_20 = L_19;
				RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_20);
				Il2CppFakeBox<GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281> L_22(il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_18);
				bool L_23;
				L_23 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_22), L_21, NULL);
				if (!L_23)
				{
					goto IL_0085_1;
				}
			}
			{
				int32_t L_24 = V_3;
				HeapPriorityQueue_2_KCOHELBPKLG_m3D60EC054CFCEC0FC77D0E4026EEEA58DD18BC71(__this, L_24, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_010e;
			}

IL_0085_1:
			{
				int32_t L_25 = V_3;
				int32_t L_26 = __this->___BDAICNLNLCB;
				if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_25, 2))) >= ((int32_t)L_26)))
				{
					goto IL_00bb_1;
				}
			}
			{
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_27 = __this->___ODDLHPPPHME;
				int32_t L_28 = V_3;
				NullCheck(L_27);
				float* L_29 = (float*)(&((L_27)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_28, 2)))))->___priority);
				float L_30 = ___1_CPIDBPOGGJM;
				int32_t L_31;
				L_31 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_29, L_30, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				if ((((int32_t)L_31) < ((int32_t)0)))
				{
					goto IL_00bb_1;
				}
			}
			{
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_32 = V_2;
				int32_t L_33 = V_3;
				NullCheck(L_32);
				Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_32, ((int32_t)il2cpp_codegen_multiply(L_33, 2)), Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
			}

IL_00bb_1:
			{
				int32_t L_34 = V_3;
				int32_t L_35 = __this->___BDAICNLNLCB;
				if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_34, 2)), 1))) >= ((int32_t)L_35)))
				{
					goto IL_00f7_1;
				}
			}
			{
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_36 = __this->___ODDLHPPPHME;
				int32_t L_37 = V_3;
				NullCheck(L_36);
				float* L_38 = (float*)(&((L_36)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_37, 2)), 1)))))->___priority);
				float L_39 = ___1_CPIDBPOGGJM;
				int32_t L_40;
				L_40 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_38, L_39, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
				if ((((int32_t)L_40) < ((int32_t)0)))
				{
					goto IL_00f7_1;
				}
			}
			{
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_41 = V_2;
				int32_t L_42 = V_3;
				NullCheck(L_41);
				Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_41, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_42, 2)), 1)), Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
			}

IL_00f7_1:
			{
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_43 = V_2;
				NullCheck(L_43);
				int32_t L_44;
				L_44 = Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline(L_43, Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
				if (L_44)
				{
					goto IL_0030_1;
				}
			}
			{
				goto IL_010e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010e:
	{
		return;
	}
}
// Method Definition Index: 31726
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_LFPGDNMECKM_mE4DB33079F7BA6C299673E142661C0702ABEF6A1_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (318.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31727
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PLNLAFBHJMM_m587EAA01DDE1591690638650631244223C322EDF_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/7));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31728
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_LEKNFDENLEG_m5BC295C15314E470ABE497069D3493F4D3D66162_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(0, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(0, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31729
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JOEKJNEHJNG_mCCBAAAD96D60F15C3C34C985D7433EA8C4FC906E_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (938.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_HINMHGLKKNJ_m3C5ED4CF49F422556822446CDC3AB224873B2744_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(5, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 0)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(0, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PHGBDOGPKFL_mB1874E61D1CB4FA83334E2978B278F278C9CD00F_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31732
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BPPAMPOBAJB_mC3743B6557B608267C07B0563A28E865DBFEFCC3_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31733
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PBJKMPMJGIA_m2C8A0A1AC85CF287A9BFF3AD1CFDED33A1F77B96_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/2)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/2));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/2));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_ABHJGEFHDPC_m507666ED0F37764CDFAA9A2EDDC332C22014E5B7_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MEEBIICHCCP_m7200FC802413EBA8C97F46211EE0FD249357709C_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EDFDNJPGJCP_mF01C44D90662B520DB2A132CFAB07FD9D963AB85_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(6, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(4, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DGIMBJFJJKC_m40ECE06AA6D68E54C546A6EA35413FB70A098ECF_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/6)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PCKMPICNAMD_mC2611836133288B7E06EA31C1A7A28EAC113F5BE_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(8, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(5, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_ODGOKIALBPP_mB39CF5E723120A6EA4AB83D0D1EF4FB0B63E4593_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/7)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MLHJECHMKFN_mBAB444BDE4F7BF2C47C8F62796861F25FA85BAF1_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/7));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GPANJMAHGJI_mF13C3683AD3C782D464F21E263D9A76B78141A0F_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/5)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OOBEPGJIJGH_mB7F3C005ABD8C9A9D786B5D5878E18C77F19727D_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/2)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31745
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_ENCIFKIJODI_m05F7A9DE63C761AD16DA5B0C46DB8B2F87DD3002_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PGBHLCGBJHF_m02CA55C839077B2A67A282BB9BC93F6E6EC631CA_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/0));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/7));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DAHEOJDKAMM_m910D8BB93B086DC9FF7CFF9F1AEACBE25F35059D_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/8)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31748
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_NNJNJDMHDNL_mE356205D2506A568E4971E6F81A2E597F8C54A94_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31749
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JFPNJJCMCKK_m79B031484B612F8EB180E8E98A7A14F224B8CC61_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 0)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(0, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31750
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DHHLFLDDFKG_m6AEBD8D97F7B239AA9D5A22C1FB7EAD1A3D473F2_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(8, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(4, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31751
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_CGBLHJCCHDG_m775095D146350131C3ABA8465C40E86B888F42DF_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (638.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31752
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BKPBPPPFMHJ_m02BBF3664EDA9214C95CEDB29EBA6414C5576E63_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(5, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 0)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(6, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31753
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HeapPriorityQueue_2_DJEEHDAMGHB_m7E39F33B0D19FC1015F5C8E6680287DAA1875D76_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0023;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0023:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			int32_t L_4 = __this->___BDAICNLNLCB;
			V_2 = L_4;
			goto IL_0024;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
		int32_t L_5 = V_2;
		return L_5;
	}
}
// Method Definition Index: 31754
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_NJJKFDFFCOM_m3E34F7B6CBA48425611BE5F8AF89EA65BB7F3EBD_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/2));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31755
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JLIAKFCJIGO_m0E8CBC11BAFA9A8D509C85C44642484D414660D7_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(5, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 0)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(8, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31756
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PFGGFNKOAKN_m65630F516775004D887EB6958840016964CC85D0_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/0)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31757
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MBOLNGMCKOM_mED9D89D21E982DC48C424C9A9A73C8A4E3E87763_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/7)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31758
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DPIICDKKAKP_m0D2E00DB2D5FA441B2C3F1E3AF158B069BDC2E0B_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1023.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31759
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_NIMCGAGMKKI_mE315DC3E669EBDBE2F7C35B465DEA12B9B2538EE_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/7));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/4));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31760
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IFNNLLOHOIF_m1C68DE91A845FB17CB2890C57BC23CD7EB03D850_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1127.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31761
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JFOFPGLKIPK_mCF42522D2A469BA1568DC3F91EA22FBF2B80D020_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (765.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31762
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_FFOENFNGFLE_mCA89ACB562639B27E28C0995D1D6A8BC23DE25E3_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31763
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IKKGMGMJHAB_mA76E613EDBB75BE8D2D7C77E3F9B46C6BD44279E_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (161.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31764
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HeapPriorityQueue_2_ICPHBBNAJJE_mA2D529B74CD4CE92FAECA9FACD0EC0B9C438A161_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001d:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0026;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0026:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			int32_t L_4 = __this->___BDAICNLNLCB;
			V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
			goto IL_0027;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0027:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
// Method Definition Index: 31765
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GPHFMMPOAGK_m0DBD0AFBD0A52E3AB81EB90428325A529236E25D_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/4)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31766
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DBOGPLAGLBK_mF008470205AD89E818E39712B2CBD7B2DCE3421C_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/2));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31767
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OICBAEKGHPB_m818F30ABEDEF4220802540C19986E6B2A5D0B903_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1387.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31768
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BBLGPOALBIE_mBB134CBE39E746470B434DF9C927B60B1AE6EE70_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1337.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31769
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_CHJBKAIJIHF_mF816BE52FD9D510C2277C2FEB53F0D3E7CE9B960_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/7));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31770
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OBDMPLNIABH_m4EE7B4D8DBFC55D998EA991BB6A9F1612A0A3397_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (397.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IHKOEENOFKB_m57EA4E26BC442860570A08599C10A88E27F940D4_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/7));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31772
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IGCKENKMOAP_mED75956FC48D596A2229B0D079C2DC90E6F0A145_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31773
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PCCLODMMINE_m26441157688143BF5C667FEB5AB20679C1D64DF5_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/0)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MENIGFIOLCH_m6F164A72821A50B9DA8C8924F6C4B9ADED652B73_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_CEAFJGHABJF_m527D62EF5DB5B71FCC7D092CB7D639F057AFCA2B_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/5)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_HDLOHKINNDC_mF72723BFCC239E30C1C653AB0FFB12F2AB599660_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1715.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KNEOLIGFGEE_m23075A11B2EB470D1FE75F74EB6C69CEB21BDB71_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(1, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(5, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IINAEOONANH_m6D227D9C2C76FF93BE801FA2B6DC4A4E247BE1C2_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(6, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(8, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AEKDHFMMJHA_mF9E3DB12002E1C0AC8979F49DDD1FB8E89939531_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(1, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 0)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(7, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_LOBAHJHNFBO_mAC41304E99A89DEEDEF46D4579884A600FC00B75_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (658.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_ANMIJHKENJN_mF9CA991A6C01AF14182FB66A6960A10541FC6F4C_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/8)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 HeapPriorityQueue_2_JIFECIIAAGA_m7CF1D520B17DEA8FE868034B1F23AEACD3B6C9A0_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		NullCheck((PriorityQueue_2_t677ED62496B46B96F7A8174E9AA0764410A44CFB*)__this);
		GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 L_0;
		L_0 = VirtualFuncInvoker1< GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281, float* >::Invoke(12, (PriorityQueue_2_t677ED62496B46B96F7A8174E9AA0764410A44CFB*)__this, (&V_0));
		return L_0;
	}
}
// Method Definition Index: 31783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GBFABLFNDOM_m0E603547B2B78F3B0B4EE737F16AE18B0A1A0F72_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 ___0_CAFHADGPHEN, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_005a;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_005a:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				V_2 = 0;
				goto IL_0046_1;
			}

IL_0015_1:
			{
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
				int32_t L_5 = V_2;
				NullCheck(L_4);
				GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281* L_6 = (GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___element);
				GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 L_7 = ___0_CAFHADGPHEN;
				GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 L_8 = L_7;
				RuntimeObject* L_9 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), &L_8);
				Il2CppFakeBox<GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281> L_10(il2cpp_rgctx_data(method->klass->rgctx_data, 8), L_6);
				bool L_11;
				L_11 = ValueType_Equals_mCA5344597A8055EC544855AD60A983B10E0EE67D((ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F*)(&L_10), L_9, NULL);
				if (!L_11)
				{
					goto IL_0042_1;
				}
			}
			{
				int32_t L_12 = V_2;
				HeapPriorityQueue_2_KCOHELBPKLG_m3D60EC054CFCEC0FC77D0E4026EEEA58DD18BC71(__this, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_005b;
			}

IL_0042_1:
			{
				int32_t L_13 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_13, 1));
			}

IL_0046_1:
			{
				int32_t L_14 = V_2;
				int32_t L_15 = __this->___BDAICNLNLCB;
				if ((((int32_t)L_14) < ((int32_t)L_15)))
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_005b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 31784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OFECGEOCFIP_m13A5943272264515F7C7BC78374BBBC9F5A915E6_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/6));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/5));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DNAMCKEAMFN_m5EDB9E83316E916CF3B54FD8C9EA3B432DF6F003_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/3)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MDKFHOPGGCI_mA4376AF9A5090456AC3CE2C560FE043A1C6BDDA3_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(0, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IHCIADHMAOA_mE57F6622375CCD466603B8BD78E1316A7AD257CB_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(3, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(7, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_CKLCDCDMIKD_mD9A1DB94BF161537AB27E19C2FCD10AB3A0658FB_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/1));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/1));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_COEAEFGKIEI_m31AB80F56E8B7D42C68B38C393E5BED6C86749F7_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_NBHAICHFIHC_m34E9AD9FDAA95BA7CBAB5DBA0B2FAA0E7DAC985D_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_CBKAOAIOAMG_m9FA8EE1841F03A7ABF5BEF0A7C98827E72870C0E_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/4)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EMJKFDHIKIJ_m7558734ECB3B030E35F6A152F3135BD77494300D_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/0));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/2));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BEPJMNEPJPP_m38886CE990E8593AD48FD352FC5EA58340442946_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 ___0_CAFHADGPHEN, float ___1_CPIDBPOGGJM, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0066;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0066:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				int32_t L_4 = __this->___BDAICNLNLCB;
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_5 = __this->___ODDLHPPPHME;
				NullCheck(L_5);
				if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
				{
					goto IL_0027_1;
				}
			}
			{
				HeapPriorityQueue_2_EAECNLBGBJE_m4791EB5EA21723B3FB2F5ECB3333F8E06B07D54A(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
			}

IL_0027_1:
			{
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
				int32_t L_7 = __this->___BDAICNLNLCB;
				float L_8 = ___1_CPIDBPOGGJM;
				GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 L_9 = ___0_CAFHADGPHEN;
				JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_10;
				memset((&L_10), 0, sizeof(L_10));
				JEAAKABOFDI__ctor_m1C973E0B6842D1B23CB1177FCF085964374BA13A((&L_10), L_8, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				NullCheck(L_6);
				(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_10);
				int32_t L_11 = __this->___BDAICNLNLCB;
				__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_add(L_11, 1));
				int32_t L_12 = __this->___BDAICNLNLCB;
				HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, ((int32_t)il2cpp_codegen_subtract(L_12, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				goto IL_0067;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_LDODHPEAFLL_m4491018D1DAB0A51857D582044A06CDF3F11A933_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_HDDLIFPPFGH_m9E13E1DAD13F79F6589CF7E1EC2E6EB9240DEA0A_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1721.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AGMAKHEEBNE_mDFA6E3BEF76950D077BEBF5887947E0611B70C20_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/7)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JJPHFBMOCPD_m522D9D969B89B7DFA2391571D0BC9FB9BF301D54_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(6, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(1, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_NNPKPHHMCIB_mBBC0E4BA7319C9D0AAF2F7ED31B2F8DF4E7B56E6_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_HJHMOHGEIIG_mE01180796B93C818C438E0B64713793A20238BA4_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(6, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 0)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(6, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MAMJPPLEPLJ_m5F5FCB2EA87CC7B22C2B303766050D3158C638AD_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/8)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31801
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IPOHFBAFGGH_m5BD06F9C2448F49A41ECB6D13B68CC8791291A67_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(8, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 0)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(3, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MEMKNMJAAHG_m1997259CC953D256BD737B66927351B1919907E0_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/3));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/5));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KJJIPGMDNFN_m04314EE41F1BBF7CACD9C206C9581C6941DA6790_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/3));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EMPFIJLABGB_m6E137C17222D36875464FA35500786B45BEB33CF_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JAIJAGDNALE_m882F074A9481C46B2647F8ED95B3BBBCAF674E67_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/5)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_FGFIMIBCAPD_m48BE1107942E0294DD93405503BEDC262373104E_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/2));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/2));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OFEKLDBALGD_m42507FD294E494DC23D47C7B1C274EC1A34691F9_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/5)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PHNDCBALCKP_mFACB595C7429E192833CB430F37A3B39DFA156E9_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31810
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PKICACIMIBK_mD515E02793FFBEEF8FB3F9E1D4BE01A690985723_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/0));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/3));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_ANJGIOINOFL_m5FD2D28D3616DDD1B1271838568BADFDFAB63535_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BEDGAMMDJKM_m97C085CA800B1140C97245A3EFDC2BDF2DF3ED17_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(8, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(8, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KCOHELBPKLG_m3D60EC054CFCEC0FC77D0E4026EEEA58DD18BC71_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/2)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_HAPLBHAPEEO_mCB4FBD0981CEE639AFAC6489B55413015801F433_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GPCLKCEBDPC_mA32849C1178BDA6E03ECD9C3A35390ADC792CEDE_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AOEKHGGHCLH_m1C3AD40A902D4F433D92391FB1507D1717A0A80B_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/5)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EPMCPIOGGAA_m66CCEB72BC63BBD8C781F55FF403BF4FDCFD2A29_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/7)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_FKDBKEAKOKA_mC7EFCC607A85708DBC73F3B05FA95740CE073857_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/5));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MBEKCODKIEE_m3E9C20E2EA09F46D49DA99F4A9BDC1975DFB2BE6_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/5)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AALNNHIOLEH_mD14EBCCE8F7BE0FDEF3C17DD60DB18AB66C11FA5_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_FOEDHPMKFCK_m72B903EA198234B08351D6DB4FC2C45ACAB1E892_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(5, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(0, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PJHJDPEEKLE_m657027637BA5CFCC53575B3A08295A20FB3466F5_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31823
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IBKLMBMNMOB_mD4F77C451E7362B9C16E06D93736F1B2295D5443_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/4));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31824
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2__ctor_mCB08D6E5FAE6458FD9A4B39DA344FA38EB1FCCF9_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* ___0_EIJMMHDKNAD, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___JFJKJMPDHBP = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JFJKJMPDHBP), (void*)L_0);
		PriorityQueue_2__ctor_mEF61F7D2004D4262870C36DF5A9E5B85F10FD7FD((PriorityQueue_2_t677ED62496B46B96F7A8174E9AA0764410A44CFB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		RuntimeObject* L_1 = __this->___JFJKJMPDHBP;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0083:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* L_5 = ___0_EIJMMHDKNAD;
				NullCheck(L_5);
				int32_t L_6 = L_5->___EOLMCKGJILD;
				__this->___EOLMCKGJILD = L_6;
				HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* L_7 = ___0_EIJMMHDKNAD;
				NullCheck(L_7);
				int32_t L_8 = L_7->___BDAICNLNLCB;
				__this->___BDAICNLNLCB = L_8;
				HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* L_9 = ___0_EIJMMHDKNAD;
				NullCheck(L_9);
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = L_9->___ODDLHPPPHME;
				NullCheck(L_10);
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
				__this->___ODDLHPPPHME = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
				V_2 = 0;
				goto IL_006d_1;
			}

IL_0051_1:
			{
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
				int32_t L_13 = V_2;
				HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* L_14 = ___0_EIJMMHDKNAD;
				NullCheck(L_14);
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = L_14->___ODDLHPPPHME;
				int32_t L_16 = V_2;
				NullCheck(L_15);
				int32_t L_17 = L_16;
				JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_18 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_17));
				NullCheck(L_12);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(L_13), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_18);
				int32_t L_19 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
			}

IL_006d_1:
			{
				int32_t L_20 = V_2;
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_21 = __this->___ODDLHPPPHME;
				NullCheck(L_21);
				if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
				{
					goto IL_0051_1;
				}
			}
			{
				goto IL_0084;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		return;
	}
}
// Method Definition Index: 31825
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JDMFPPLOHJF_mEDCFBA3685920B4880A7E1498AA85BAA83750682_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 0)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(6, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31826
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EDIEADJIIAJ_mF7C0367DA8494012899C97667CE8F60BEC772CE4_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31827
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OPBMJCEJFMN_mCCF15159277E2CD13FCA7628DB8CADC6628599A2_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/6));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31828
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AJEDDKANNDN_m2548CA38A7437CF8B613014561DC43532192529F_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/3));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/7));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31829
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2__ctor_m3A17B61F29A09660C50361DFD7F23889915A1F17_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_OHLPGKNKGAN, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___JFJKJMPDHBP = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JFJKJMPDHBP), (void*)L_0);
		PriorityQueue_2__ctor_mEF61F7D2004D4262870C36DF5A9E5B85F10FD7FD((PriorityQueue_2_t677ED62496B46B96F7A8174E9AA0764410A44CFB*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		RuntimeObject* L_1 = __this->___JFJKJMPDHBP;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0040;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0040:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			int32_t L_5 = ___0_OHLPGKNKGAN;
			__this->___EOLMCKGJILD = L_5;
			int32_t L_6 = ___0_OHLPGKNKGAN;
			JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_6);
			__this->___ODDLHPPPHME = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_7);
			goto IL_0041;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		return;
	}
}
// Method Definition Index: 31830
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KFEOKCAGMCA_m60F2D0C6B333527E4E3997B8690E2A7FF8B9A3EF_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31831
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_ENFDLKDNPDK_mC963C796BCF48D322AF01CEC4CE1D08C567F5696_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (483.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31832
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_NMJEOOFCEBC_m8E97C2E00DE96B1F65898FF9992FA14B1454B8E4_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/0)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31833
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 HeapPriorityQueue_2_JGHEDJHEEAM_mF40291C20F9BA5C03DEC91F517B190FAD0AE93C3_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0041;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				NullCheck((PriorityQueue_2_t677ED62496B46B96F7A8174E9AA0764410A44CFB*)__this);
				int32_t L_4;
				L_4 = VirtualFuncInvoker0< int32_t >::Invoke(6, (PriorityQueue_2_t677ED62496B46B96F7A8174E9AA0764410A44CFB*)__this);
				if (L_4)
				{
					goto IL_0024_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral015D605F32698B0A0547B228A08659E95DAC9484)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
			}

IL_0024_1:
			{
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
				NullCheck(L_6);
				GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 L_7 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___element;
				V_2 = L_7;
				goto IL_0042;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 31834
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KKCJALMINIL_m610F4475A429D5414CE164109D95A97BD97B086F_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (397.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31835
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DCDNHMPEDAF_mB76CCE06A91DCD0932D54BCCB5FED61ACBAFD6FC_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/4)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31836
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_FDMMCODPFKB_m6B174A5F16036D99BE887392F02CE95C53F1BB96_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31837
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PCKKALPIMEC_m9E29566031A502996C62DBF5386CEE4B2ACFCD8A_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/0));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31838
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EAECNLBGBJE_m4791EB5EA21723B3FB2F5ECB3333F8E06B07D54A_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1.5)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31839
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BLODIFEKLFN_mDB1B58C32E8134A4709334D1769B22C2A24E96A6_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31840
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AMHMFDPKJID_mC8DD5C9461CF88DD080AFA5ADF53304B21725CE3_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (551.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31841
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EIIGCBEOMFH_mF5DEB1137B1EAA7C3F98BA3EEDA331A5FFFD942D_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/8)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31842
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OCNPOOIMDCJ_mFE06951A2ACF114F4106A2822277E4D67EDADFA3_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31843
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_CFGMNJFGFCA_mD2157CDD294CC7FE1B770738407795DD3872B47C_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(4, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31844
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_FJDPMHHJPME_mB4714004CF49BDFCE531003D31AE52E101A8D1E8_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (26.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31845
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HeapPriorityQueue_2_GetEnumerator_m4E920166723628E7CEA8BB7A9558CFE4F2EA5EC0_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0023;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0023:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			OKCNJOLDHEJ_tAADC2CDF139D0D6C447D57F4D77693A0D39EAF48* L_4 = (OKCNJOLDHEJ_tAADC2CDF139D0D6C447D57F4D77693A0D39EAF48*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 22));
			OKCNJOLDHEJ__ctor_m967C6BD37D30247EDE2692464ABB34443838C5CC(L_4, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			V_2 = (RuntimeObject*)L_4;
			goto IL_0024;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
		RuntimeObject* L_5 = V_2;
		return L_5;
	}
}
// Method Definition Index: 31846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BPGEOBAOIAE_m177D6962C8DD9F24B0F0872818CC57F786F695CD_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/6));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/4));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AIKLJDODOGF_m6D311FA7A81350F7934930BEAFD5CDF600CF324C_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 0)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(3, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PHNEHCLBBJF_m75ADD79F0F19605638C4087211D375EBAEA0403D_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(4, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(6, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31849
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_HNMHBOCEFDJ_m3E823992791AF4024A75BD94DBA0617C6309DA96_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31850
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JMCKJGLIEOH_m677B7CAB2635006F9D1E1D9AA032E7F9EBF1848C_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/5));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/4));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31851
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BANJOOOMBJK_m925B34E4E17CFA9F6A0DAD1662A3344D5FA222FE_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/1)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31852
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EOIMFFBGIBJ_mCB7C8F6352A65D9A58DD912CF29E4D70E5942901_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/4));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/8));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31853
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JHMBDAKMGJN_mCCB19EF5C2BEB34D1994C07B969B621A6FB156CC_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/4));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/3));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31854
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MJBDILHPGGI_mA18C68C3FC802352E80ED1DBB55EC0EA7D4E6380_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/3)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31855
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_FEBLABCEFNN_mC5253C01AC603F5648FEF003C1B942BB6C5DA6E5_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/0));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/2));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31856
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2__ctor_mA8847E953352D7E06D3733ACE2EF21289721EFF0_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	{
		HeapPriorityQueue_2__ctor_m3A17B61F29A09660C50361DFD7F23889915A1F17(__this, ((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
// Method Definition Index: 31857
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_CCAMNNCBCIM_m2A9FF049B80D2D9E6A8B5E57B2DF857F2A4DC996_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31858
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float HeapPriorityQueue_2_IEIDNKAMMDO_m344F69B7551224DFFDE99B51A42B49CD562C934D_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	float V_2 = 0.0f;
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0041;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				int32_t L_4 = __this->___BDAICNLNLCB;
				if (L_4)
				{
					goto IL_0024_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral015D605F32698B0A0547B228A08659E95DAC9484)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
			}

IL_0024_1:
			{
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
				NullCheck(L_6);
				float L_7 = ((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___priority;
				V_2 = L_7;
				goto IL_0042;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		float L_8 = V_2;
		return L_8;
	}
}
// Method Definition Index: 31859
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_INLOFNDBAJG_mBFE349BC92BB1F49E8C66CCF2C5894F911EF7808_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31860
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PCFOCEEFKGD_m19EB8D8359E40D403432EFB8B4E3BF944165850C_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/0));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31861
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BHIJEBBGKBF_m46443EDD8A699FADA5D59401CDFC55FEB28C9A0E_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31862
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OEMLPMKPFHI_m4135E293CD9333F46ACA5E028DB770EF2EE592FA_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(6, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31863
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MPHEOMMIFOA_mBE95294948230FEC73166138E5442953B48673B3_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (373.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31864
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MILOMDBDGAA_m0F43118C5D99E073A8C238D2100C32FAE4507257_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/6)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31865
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GLCGPDFOEFO_mAE70BA20377F8504B62CAFEE633DF0BF83E27040_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/6));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/1));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31866
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_ODLJGBHLDGA_m93F05D30AFEEDA9BC704D477C97C33913BBC9A55_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JOEHCJFEBIH_mB80F6F94E88EEB35E5A5C1AB8A13150D520C12D7_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, const RuntimeMethod* method) 
{
	JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_1 = (JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)(JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1684.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(L_3), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DIFALBLNAOD_m35B00BBCA4962193ACFD751AAFF87BA3E55E2C32_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(8, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 0)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(3, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IGIOGIBBCEM_mD10178F9B41A8EB2CEE2A203C0EE589A0572B2DF_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(3, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 0)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(7, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EFFADCGGFJH_m04681F5A35FC03BF8583FD6EE9033252567F4EB7_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/3));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/5));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_HONOMEKDFPG_mE127845A9C3E6BFC0C02508C6EAD07F99A48B2EF_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(8, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(1, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KDKKHEPGHEG_m3946773C056BF574376850F5E035888A193779EF_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/5)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AIHHFMOOEKJ_m60BFE44FE756B6872B621369ECA23BB28F679C01_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_LILCNIGLAAG_m43AF774FA0FD27093CA9ED88004C17E317B66E27_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/7));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/3));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31875
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IDNDPGCCCGA_m295DC8B36C7F2C1BD2C8722F28C15CD2FFA07515_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_3 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		V_0 = L_3;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(L_5), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_9);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_12 = V_0;
		NullCheck(L_10);
		(L_10)->SetAt(static_cast<il2cpp_array_size_t>(L_11), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_12);
		return;
	}
}
// Method Definition Index: 31876
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DINNANMLAID_mBE252425B4F684726AC2DFB60BD3BC3F5CA6A6F0_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(1, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(7, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31877
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DNENFBGFGEA_mBA81DB16A5B958A3D4D79C75A1F5FBB11B22B156_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(7, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 0)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(1, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 HeapPriorityQueue_2_JIFECIIAAGA_mF649659C35498730A98357FDDA866AC3C308E972_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, float* ___0_CPIDBPOGGJM, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0098:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00a1;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00a1:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				int32_t L_4 = __this->___BDAICNLNLCB;
				if (L_4)
				{
					goto IL_0024_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral015D605F32698B0A0547B228A08659E95DAC9484)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
			}

IL_0024_1:
			{
				float* L_6 = ___0_CPIDBPOGGJM;
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
				NullCheck(L_7);
				float L_8 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___priority;
				*(float*)L_6 = L_8;
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
				NullCheck(L_9);
				GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 L_10 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)))->___element;
				int32_t L_11 = __this->___BDAICNLNLCB;
				__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_13 = __this->___ODDLHPPPHME;
				int32_t L_14 = __this->___BDAICNLNLCB;
				NullCheck(L_13);
				int32_t L_15 = L_14;
				JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC L_16 = (L_13)->GetAt(static_cast<il2cpp_array_size_t>(L_15));
				NullCheck(L_12);
				(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC)L_16);
				JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_17 = __this->___ODDLHPPPHME;
				int32_t L_18 = __this->___BDAICNLNLCB;
				NullCheck(L_17);
				il2cpp_codegen_initobj(((L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), sizeof(JEAAKABOFDI_t67115FDA41010F33F60A726496A08897AE39C6BC));
				HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				V_2 = L_10;
				goto IL_00a2;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		GLBCOKOIMAN_tAC9359218CEA1B37A1BE53588074E9CCB05AE281 L_19 = V_2;
		return L_19;
	}
}
// Method Definition Index: 31879
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PDPPFHOLFKN_m5347B65DDBAB75772185988E511F46A34E329993_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/0));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/0));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		float* L_8 = (float*)(&((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = V_0;
		NullCheck(L_9);
		float L_11 = ((L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_10)))->___priority;
		int32_t L_12;
		L_12 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_8, L_11, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KDKBBNCHOBO_mA74E57BF1A18FB954371FE9C5C068EA47E789547_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		float* L_9 = (float*)(&((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___0_PKIIEEGPFLH;
		NullCheck(L_10);
		float L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_11/0)))))->___priority;
		int32_t L_13;
		L_13 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_9, L_12, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_EKFJBPCHEMM_m9FDAB9C9C5CB3A3EBCA012D4374C5ADF3E1F1CD4(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		HeapPriorityQueue_2_IKNHABEAKKA_m581B7DFE884539B32FCC9D982AA8A2C271D27C56(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IICHOGABDMI_m94C3B7A9705B20F4BCC72B5B73454E158556C60F_gshared (HeapPriorityQueue_2_t54743AF174CBEE8917A731D917E26BE0C0B37663* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(3, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		float* L_6 = (float*)(&((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = V_1;
		NullCheck(L_7);
		float L_9 = ((L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_8, 1)))))->___priority;
		int32_t L_10;
		L_10 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_6, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		float* L_14 = (float*)(&((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)))->___priority);
		JEAAKABOFDIU5BU5D_tDA55ED65D2E4C7FF7CDF00A0357CAB5726EA27CE* L_15 = __this->___ODDLHPPPHME;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		float L_17 = ((L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_16)))->___priority;
		int32_t L_18;
		L_18 = Single_CompareTo_m06F7868162EB392D3E99103D1A0BD27463C9E66F(L_14, L_17, il2cpp_rgctx_method(method->klass->rgctx_data, 6));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		HeapPriorityQueue_2_GDCNLJPOAAM_m32C473B852CD6859600DFE2C05008C7983D57300(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(5, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Method Definition Index: 31723
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PKDFEHOBOBL_m721E276851C39502E5BF45AAFE1DD0847A2BA33B_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_003d:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0046;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0046:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				V_2 = 0;
				goto IL_002b_1;
			}

IL_0015_1:
			{
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
				int32_t L_5 = V_2;
				NullCheck(L_4);
				il2cpp_codegen_initobj(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
				int32_t L_6 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_6, 1));
			}

IL_002b_1:
			{
				int32_t L_7 = V_2;
				int32_t L_8 = __this->___BDAICNLNLCB;
				if ((((int32_t)L_7) < ((int32_t)L_8)))
				{
					goto IL_0015_1;
				}
			}
			{
				__this->___BDAICNLNLCB = 0;
				goto IL_0047;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0047:
	{
		return;
	}
}
// Method Definition Index: 31724
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DKGNPNGCGNE_m1E6E79E379A85B5D19D131E68C592CA6CDE0ABE5_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/1));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31725
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GBFABLFNDOM_mBB8354729E3DE1F83748301CE5E75578145B762E_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, Il2CppFullySharedGenericAny ___0_CAFHADGPHEN, Il2CppFullySharedGenericAny ___1_CPIDBPOGGJM, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_15 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const uint32_t SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	void* L_19 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
	void* L_27 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_36 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_26 = L_13;
	const Il2CppFullySharedGenericAny L_35 = L_13;
	const Il2CppFullySharedGenericAny L_17 = alloca(SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* V_2 = NULL;
	int32_t V_3 = 0;
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_4 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_4, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0104:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_010d;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_010d:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				int32_t L_4 = __this->___BDAICNLNLCB;
				if (L_4)
				{
					goto IL_001e_1;
				}
			}
			{
				goto IL_010e;
			}

IL_001e_1:
			{
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_5 = (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E*)il2cpp_codegen_object_new(Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E_il2cpp_TypeInfo_var);
				Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D(L_5, Queue_1__ctor_mCFD83A65B216389290AEF3479047C9FBD933BF5D_RuntimeMethod_var);
				V_2 = L_5;
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_6 = V_2;
				NullCheck(L_6);
				Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_6, 0, Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
				goto IL_00f7_1;
			}

IL_0030_1:
			{
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_7 = V_2;
				NullCheck(L_7);
				int32_t L_8;
				L_8 = Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650(L_7, Queue_1_Dequeue_mF8CBF6CA268A863994D198E7FB69116D39C9D650_RuntimeMethod_var);
				V_3 = L_8;
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
				int32_t L_10 = V_3;
				NullCheck(L_9);
				int32_t L_11 = L_10;
				il2cpp_codegen_memcpy(L_12, (L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
				il2cpp_codegen_memcpy(V_4, L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
				il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_CPIDBPOGGJM : &___1_CPIDBPOGGJM), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
				RuntimeObject* L_14 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4), L_13);
				bool L_16;
				L_16 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 7), L_15, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), L_14);
				if (!L_16)
				{
					goto IL_0085_1;
				}
			}
			{
				il2cpp_codegen_memcpy(L_17, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? ___0_CAFHADGPHEN : &___0_CAFHADGPHEN), SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
				RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_17);
				bool L_20;
				L_20 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 8), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_19, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)V_4, il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),1)))), L_18);
				if (!L_20)
				{
					goto IL_0085_1;
				}
			}
			{
				int32_t L_21 = V_3;
				((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_21, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_010e;
			}

IL_0085_1:
			{
				int32_t L_22 = V_3;
				int32_t L_23 = __this->___BDAICNLNLCB;
				if ((((int32_t)((int32_t)il2cpp_codegen_multiply(L_22, 2))) >= ((int32_t)L_23)))
				{
					goto IL_00bb_1;
				}
			}
			{
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_24 = __this->___ODDLHPPPHME;
				int32_t L_25 = V_3;
				NullCheck(L_24);
				il2cpp_codegen_memcpy(L_26, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_CPIDBPOGGJM : &___1_CPIDBPOGGJM), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
				int32_t L_28;
				L_28 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_27, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_24)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_multiply(L_25, 2))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_26: *(void**)L_26));
				if ((((int32_t)L_28) < ((int32_t)0)))
				{
					goto IL_00bb_1;
				}
			}
			{
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_29 = V_2;
				int32_t L_30 = V_3;
				NullCheck(L_29);
				Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_29, ((int32_t)il2cpp_codegen_multiply(L_30, 2)), Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
			}

IL_00bb_1:
			{
				int32_t L_31 = V_3;
				int32_t L_32 = __this->___BDAICNLNLCB;
				if ((((int32_t)((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_31, 2)), 1))) >= ((int32_t)L_32)))
				{
					goto IL_00f7_1;
				}
			}
			{
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_33 = __this->___ODDLHPPPHME;
				int32_t L_34 = V_3;
				NullCheck(L_33);
				il2cpp_codegen_memcpy(L_35, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_CPIDBPOGGJM : &___1_CPIDBPOGGJM), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
				int32_t L_37;
				L_37 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_36, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_33)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_34, 2)), 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_35: *(void**)L_35));
				if ((((int32_t)L_37) < ((int32_t)0)))
				{
					goto IL_00f7_1;
				}
			}
			{
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_38 = V_2;
				int32_t L_39 = V_3;
				NullCheck(L_38);
				Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A(L_38, ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_multiply(L_39, 2)), 1)), Queue_1_Enqueue_mD0BFD1A401EF2D3489D09B60C30E3468601BBA0A_RuntimeMethod_var);
			}

IL_00f7_1:
			{
				Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* L_40 = V_2;
				NullCheck(L_40);
				int32_t L_41;
				L_41 = Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_inline(L_40, Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_RuntimeMethod_var);
				if (L_41)
				{
					goto IL_0030_1;
				}
			}
			{
				goto IL_010e;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_010e:
	{
		return;
	}
}
// Method Definition Index: 31726
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_LFPGDNMECKM_mEAA385566BD70E82CD54BE2A0DD66D6462F48966_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (318.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31727
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PLNLAFBHJMM_m7739750B3132B27A45B10B99434C55916963844F_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/7));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31728
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_LEKNFDENLEG_m203F96889893259FA7BB5E36153035C81B413C11_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(0, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(0, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31729
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JOEKJNEHJNG_m3823BB16FF1B4604491F0DCE4B5FFE3D86A65CB6_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (938.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31730
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_HINMHGLKKNJ_m21D4E47C568AA0FCFD5370D3FF89885CCB1BBD89_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(5, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(0, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31731
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PHGBDOGPKFL_m1BD73FF985F65C82B5F14093AF612C039B1CB97A_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31732
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BPPAMPOBAJB_m0D9C791C954D246CC45B0071200A23E38345CDB4_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31733
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PBJKMPMJGIA_mD6E01BC1E94A4DC2C6EF1F42A0423D2EA700FCA8_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/2))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31734
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IKNHABEAKKA_m92B4FB02460AD894729FD698D6CC1E09B7B89EB6_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/2));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/2));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31735
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_ABHJGEFHDPC_mE6B642700827663986E37359D1DEDEAF36B9E51B_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31736
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MEEBIICHCCP_mEC6629310B970C78613512C371961CC53FB13820_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31737
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EDFDNJPGJCP_m5F8A1345E1CDDD50F6B762B249EB6CED0C9980C2_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(6, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(4, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31738
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DGIMBJFJJKC_m146BA68C2348A66F9EE7EE9A79E71BA6BF120F7F_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/6))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31739
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GDCNLJPOAAM_m4DDDBB789428AF05C9ADD2B2891168D7417F2EA2_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31740
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PCKMPICNAMD_mB9247445003F43C746EAB24716F76D9C02900479_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(8, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(5, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31741
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_ODGOKIALBPP_m12BDEB054D907BF20BC2B41D8B98E459AC1837BA_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/7))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31742
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MLHJECHMKFN_mE29C07CFE948CCF5FF0A507AEE90374C3F1369DA_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/7));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31743
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GPANJMAHGJI_m52AB6F6B4664DD212A0D822165D02457E1BD6704_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/5))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31744
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OOBEPGJIJGH_m1F396E2330BE84D12722550D228457470802063E_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/2))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31745
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_ENCIFKIJODI_mBA005EE515D22A86637A3CA1389F9F6B8843D1DA_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31746
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PGBHLCGBJHF_m75A3BFE86DD3BD021632DC4F7AF701016867F56B_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/0));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/7));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31747
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DAHEOJDKAMM_m84FD96778E98280377340C394297A8BB2EE49664_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/8))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31748
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_NNJNJDMHDNL_m22F37D6DA04A2CF75ADD840299C264C3027CCC04_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31749
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JFPNJJCMCKK_mC928C099AF3D390E06A1EC50F2F1A20823733C8F_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(0, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31750
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DHHLFLDDFKG_mB384D987AB0D7797072F2D4419183588EA3C436F_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(8, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(4, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31751
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_CGBLHJCCHDG_mBE66759F3D7ABD8064C7635DD9F7CA48214E7856_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (638.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31752
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BKPBPPPFMHJ_m6F39CCF5496D726653356C61623C4C2A4729AA34_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(5, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(6, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31753
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t HeapPriorityQueue_2_DJEEHDAMGHB_m67DC189B963188598CAEC9C0129D5B503A112C8D_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0023;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0023:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			int32_t L_4 = __this->___BDAICNLNLCB;
			V_2 = L_4;
			goto IL_0024;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
		int32_t L_5 = V_2;
		return L_5;
	}
}
// Method Definition Index: 31754
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_NJJKFDFFCOM_mA387F37C69004E7B87A4CB93D3AD60B584A51E47_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/2));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31755
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JLIAKFCJIGO_m7C098BB9D6F8ABAB2BB97816D1957FFB236F397A_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(5, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(8, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31756
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PFGGFNKOAKN_mBB4581C8D09ECE114F4DF9CD29022B4E651CE544_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31757
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MBOLNGMCKOM_m7A60972F15BBA1EF92878093608BBC7BEBDCA95F_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/7))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31758
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DPIICDKKAKP_mDFDDC83C6C9ACB6D16C1CE8ACB728C1717EFD5A0_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1023.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31759
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_NIMCGAGMKKI_m121ABE5FDBBE02F6553D5C04E26AB90006090A80_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/7));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/4));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31760
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IFNNLLOHOIF_mC0C1088DEF5A037D587F30647EFB6E32E40C7B6E_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1127.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31761
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JFOFPGLKIPK_mB6A634348C5FE491C5618C4D887455F7A928430E_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (765.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31762
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_FFOENFNGFLE_m116881DC3C85B9C271135A977FF368D5E45E2C5D_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31763
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IKKGMGMJHAB_m7383D2D7EC97893CF9350C0669387E9185C3AEFD_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (161.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31764
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HeapPriorityQueue_2_ICPHBBNAJJE_m3FA87C10EABA119FFA77E453CA178F52F3AED2C9_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001d:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0026;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0026:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			int32_t L_4 = __this->___BDAICNLNLCB;
			V_2 = (bool)((((int32_t)L_4) == ((int32_t)0))? 1 : 0);
			goto IL_0027;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0027:
	{
		bool L_5 = V_2;
		return L_5;
	}
}
// Method Definition Index: 31765
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GPHFMMPOAGK_m9BFAA8189BC10FD1A392C9CB868744107E13F01D_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/4))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31766
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DBOGPLAGLBK_mA8A4E9DE309ADA552A8E6A252DA06DE998BC53BA_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/2));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31767
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OICBAEKGHPB_m7735836593482828950671D9072074E210161CBD_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1387.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31768
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BBLGPOALBIE_m4D663CDEB92BCB02532DC2F32537EFD823B6F841_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1337.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31769
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_CHJBKAIJIHF_mE70B15E87BB08F44774CB82EF64DF57BB9F2FC8C_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/7));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31770
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OBDMPLNIABH_m97744845A32133232B889922008D5377747D445C_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (397.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31771
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IHKOEENOFKB_mB01A84B695784B8D3E7EA56A0ED2E549966F1C9B_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/7));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31772
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IGCKENKMOAP_m219FE75CF03136E1B427AC32275960F5DE9F7955_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31773
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PCCLODMMINE_mD5BC26FAEA8DC48373884DD7161436658CBB3B36_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31774
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MENIGFIOLCH_mFB6E55CAB256B0981546F36005E9FCA1E4173D99_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31775
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_CEAFJGHABJF_mAC3A07BB89D0A62DB803C34ADF10AAB73D6B0AF2_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/5))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31776
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_HDLOHKINNDC_m9AB392B9D52A8A6DAAF436D4B092A54AAE4A10FB_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1715.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31777
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KNEOLIGFGEE_m944EAAFDCCA258F80FC9FEED8583F0F817647E74_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(1, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(5, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31778
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IINAEOONANH_m57A725E1BAA40B482C8E33551B81A8503BCF03C3_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(6, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(8, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31779
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AEKDHFMMJHA_m0777D451C2D59B433486920C895D7F164C997596_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(1, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(7, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31780
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_LOBAHJHNFBO_m5CB8D4C0ABAE44920C54587C99A559043D48367D_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (658.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31781
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_ANMIJHKENJN_mBEF14F7606C91F41A47AE36CA59DFA6D9BBE7DA9_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/8))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31782
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JIFECIIAAGA_mA8CCEAE8DED607831CB37D6D35E415075B35823D_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const uint32_t SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	memset(V_0, 0, SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	{
		NullCheck((PriorityQueue_2_t9555CB0424B0996419B3956C602674744D97CFFE*)__this);
		VirtualActionInvoker2Invoker< Il2CppFullySharedGenericAny*, Il2CppFullySharedGenericAny* >::Invoke(12, (PriorityQueue_2_t9555CB0424B0996419B3956C602674744D97CFFE*)__this, (Il2CppFullySharedGenericAny*)V_0, (Il2CppFullySharedGenericAny*)L_0);
		il2cpp_codegen_memcpy(il2cppRetVal, L_0, SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
		return;
	}
}
// Method Definition Index: 31783
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GBFABLFNDOM_m0B700AB726E25E86B10E9EE1C8B2F61C3F4E873C_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, Il2CppFullySharedGenericAny ___0_CAFHADGPHEN, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	void* L_8 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 8)));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0051:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_005a;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_005a:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				V_2 = 0;
				goto IL_0046_1;
			}

IL_0015_1:
			{
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
				int32_t L_5 = V_2;
				NullCheck(L_4);
				il2cpp_codegen_memcpy(L_6, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? ___0_CAFHADGPHEN : &___0_CAFHADGPHEN), SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
				RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8), L_6);
				bool L_9;
				L_9 = ConstrainedFuncInvoker1< bool, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 8), il2cpp_rgctx_method(method->klass->rgctx_data, 9), L_8, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),1)))), L_7);
				if (!L_9)
				{
					goto IL_0042_1;
				}
			}
			{
				int32_t L_10 = V_2;
				((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 10)))(__this, L_10, il2cpp_rgctx_method(method->klass->rgctx_data, 10));
				goto IL_005b;
			}

IL_0042_1:
			{
				int32_t L_11 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_11, 1));
			}

IL_0046_1:
			{
				int32_t L_12 = V_2;
				int32_t L_13 = __this->___BDAICNLNLCB;
				if ((((int32_t)L_12) < ((int32_t)L_13)))
				{
					goto IL_0015_1;
				}
			}
			{
				goto IL_005b;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_005b:
	{
		return;
	}
}
// Method Definition Index: 31784
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OFECGEOCFIP_mCE12FA33D01580B2875294E0BCCA364C43838399_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/6));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/5));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31785
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DNAMCKEAMFN_m4B0BBF33DAB13A1BA2275F545A60BEA0DB26652B_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/3))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31786
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MDKFHOPGGCI_m445990707261E16EB0279BE915F45277CDB1FCAE_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(0, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31787
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IHCIADHMAOA_mA3344F0C8AA242C2E7B0EA9A519F853DEEAE75B3_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(3, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(7, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31788
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_CKLCDCDMIKD_mD7DBE874EDF328E255EF2267D52E9E08C2A5EBAE_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/1));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/1));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31789
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_COEAEFGKIEI_m8AF69DEA83C9AC7B77C0569174B75B47A291DA46_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31790
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_NBHAICHFIHC_m761CE330C1C01AEC4DD05853FE8CD7F7408A0B63_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31791
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_CBKAOAIOAMG_m293D6B166A92888C7459E7779A5655E9094A4949_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/4))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31792
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EMJKFDHIKIJ_m754A6422BCEAF9E4C350EF9BD81B28D0150E5A37_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/0));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/2));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31793
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BEPJMNEPJPP_mAB77DC50AF7D4E0E1000ACFC141093ED12171B28_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, Il2CppFullySharedGenericAny ___0_CAFHADGPHEN, Il2CppFullySharedGenericAny ___1_CPIDBPOGGJM, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const uint32_t SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_005d:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0066;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0066:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				int32_t L_4 = __this->___BDAICNLNLCB;
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_5 = __this->___ODDLHPPPHME;
				NullCheck(L_5);
				if ((!(((uint32_t)L_4) == ((uint32_t)((int32_t)(((RuntimeArray*)L_5)->max_length))))))
				{
					goto IL_0027_1;
				}
			}
			{
				((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 17)))(__this, il2cpp_rgctx_method(method->klass->rgctx_data, 17));
			}

IL_0027_1:
			{
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
				int32_t L_7 = __this->___BDAICNLNLCB;
				il2cpp_codegen_memcpy(L_8, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? ___1_CPIDBPOGGJM : &___1_CPIDBPOGGJM), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
				il2cpp_codegen_memcpy(L_9, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? ___0_CAFHADGPHEN : &___0_CAFHADGPHEN), SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
				memset(L_12, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
				JEAAKABOFDI__ctor_m29633D9D0773783D83CB92291702A710DD653DE9((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? il2cpp_codegen_memcpy(L_10, L_8, SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E): *(void**)L_8), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8)) ? il2cpp_codegen_memcpy(L_11, L_9, SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB): *(void**)L_9), il2cpp_rgctx_method(method->klass->rgctx_data, 18));
				NullCheck(L_6);
				il2cpp_codegen_memcpy((L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7)), (void*)L_12);
				int32_t L_13 = __this->___BDAICNLNLCB;
				__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_add(L_13, 1));
				int32_t L_14 = __this->___BDAICNLNLCB;
				((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, ((int32_t)il2cpp_codegen_subtract(L_14, 1)), il2cpp_rgctx_method(method->klass->rgctx_data, 13));
				goto IL_0067;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31794
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_LDODHPEAFLL_m7C5A7CBD892BEAD87BDFDA9B0B20E8880BEC8914_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31795
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_HDDLIFPPFGH_mC43FB9ECDF0BD9FF630BB8D974FAE0318F8E3593_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1721.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31796
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AGMAKHEEBNE_m67E8E4CCECCA2E9C2E922CD242FAA27B46D31E91_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/7))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31797
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JJPHFBMOCPD_m48C68D3CD4FE007FAFC06637FC458EFB05247839_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(6, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(1, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31798
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_NNPKPHHMCIB_m44A0ECAAB34E4DC90DBEAB27FD30D9D3AA584A34_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31799
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_HJHMOHGEIIG_mD9D3A5FD15441B3BAEEFE6910CEF4FB4E2A0C83E_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(6, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(6, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31800
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MAMJPPLEPLJ_mF7E650E4D46E229688FA7391C1564149D64632F7_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/8))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31801
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IPOHFBAFGGH_m4DEF0E0EDCD6BED0689D79F018FFE85E941E1BCD_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(8, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(3, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31802
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MEMKNMJAAHG_mEFEC489B0A02D5104BC924ACB1BE5D4E09CFA3BA_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/3));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/5));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31803
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KJJIPGMDNFN_mF1425DD6BAC587E74DB59FB989BD5C60F42E5ED7_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/3));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31804
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EMPFIJLABGB_m8E47E9ADD2497D0E57FA878B9A2A3AD4E4872059_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31805
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JAIJAGDNALE_m10AF8229DFAD3914542A7C77FA825BCF7FFC9002_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/5))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31806
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_FGFIMIBCAPD_m9AD62044CF52AF79AB9FA10537838DDD3A113744_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/2));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/2));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31807
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OFEKLDBALGD_mAA130B05A8FAB83C3AA278E46698242E89698EB1_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/5))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31808
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PHNDCBALCKP_mA7CAD87CE0B7727864A81E28679A81F3D26ED51C_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31809
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EKFJBPCHEMM_m3727074EF8973AC09B563F3EB43251035CFB129F_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31810
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PKICACIMIBK_m5A8BE5CA055A5C7BB5416D860A2A8BEDC204E2F7_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/0));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/3));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31811
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_ANJGIOINOFL_mBA3A3204A599BD7F552943246C0C8DB4A4C076A7_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31812
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BEDGAMMDJKM_m1A80571EC3A5F4109B466F354A2A46A048CAF0E4_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(8, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(8, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31813
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KCOHELBPKLG_m4FFA2FFF5335A319752E50E1CA445C47F16223B6_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/2))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31814
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_HAPLBHAPEEO_m453A3512D678EB5B7797160C69CA1F2BBCAA3703_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31815
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GPCLKCEBDPC_m05955164D67272E9AF8775971189E8ACA11C35FE_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31816
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AOEKHGGHCLH_m17466219A13D4C0BCE95F2F53C9CA4CBAD8947DC_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/5))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31817
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EPMCPIOGGAA_m63CEE901449F73BD629D22F32E27352F5C17A920_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/7))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31818
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_FKDBKEAKOKA_m20037FCA9AF3BEB9002227331B86F68D62612927_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/5));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31819
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MBEKCODKIEE_m04F72E8EA83633D5964E4ABE29E4F2DCD281189A_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/5))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31820
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AALNNHIOLEH_m17283C3B6FB4EBFBBAE64A3759FF46041FAF677E_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31821
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_FOEDHPMKFCK_mF00BABE9A9F5902A7819C110CC3A5B1EFB01947D_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(5, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(0, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31822
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PJHJDPEEKLE_m4EDDCDEB8C0D98BE4D8910A3B428CA32E786E86B_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31823
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IBKLMBMNMOB_mDD4B25A771A3B6B95AA005D36AD86C0E8A734F19_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/4));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31824
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2__ctor_mA525EF1FE62BD96C3E9AC4FC5C8BF8C900D4A660_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* ___0_EIJMMHDKNAD, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_18 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	int32_t V_2 = 0;
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___JFJKJMPDHBP = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JFJKJMPDHBP), (void*)L_0);
		((  void (*) (PriorityQueue_2_t9555CB0424B0996419B3956C602674744D97CFFE*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))((PriorityQueue_2_t9555CB0424B0996419B3956C602674744D97CFFE*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		RuntimeObject* L_1 = __this->___JFJKJMPDHBP;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0083;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0083:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_4 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
				HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* L_5 = ___0_EIJMMHDKNAD;
				NullCheck(L_5);
				int32_t L_6 = L_5->___EOLMCKGJILD;
				__this->___EOLMCKGJILD = L_6;
				HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* L_7 = ___0_EIJMMHDKNAD;
				NullCheck(L_7);
				int32_t L_8 = L_7->___BDAICNLNLCB;
				__this->___BDAICNLNLCB = L_8;
				HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* L_9 = ___0_EIJMMHDKNAD;
				NullCheck(L_9);
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = L_9->___ODDLHPPPHME;
				NullCheck(L_10);
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)));
				__this->___ODDLHPPPHME = L_11;
				Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
				V_2 = 0;
				goto IL_006d_1;
			}

IL_0051_1:
			{
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
				int32_t L_13 = V_2;
				HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* L_14 = ___0_EIJMMHDKNAD;
				NullCheck(L_14);
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_15 = L_14->___ODDLHPPPHME;
				int32_t L_16 = V_2;
				NullCheck(L_15);
				int32_t L_17 = L_16;
				il2cpp_codegen_memcpy(L_18, (L_15)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_17)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
				NullCheck(L_12);
				il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), L_18, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13)), (void*)L_18);
				int32_t L_19 = V_2;
				V_2 = ((int32_t)il2cpp_codegen_add(L_19, 1));
			}

IL_006d_1:
			{
				int32_t L_20 = V_2;
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_21 = __this->___ODDLHPPPHME;
				NullCheck(L_21);
				if ((((int32_t)L_20) < ((int32_t)((int32_t)(((RuntimeArray*)L_21)->max_length)))))
				{
					goto IL_0051_1;
				}
			}
			{
				goto IL_0084;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0084:
	{
		return;
	}
}
// Method Definition Index: 31825
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JDMFPPLOHJF_m14A32AB6E4F912FBCC6188960BEBB0920B02ACFC_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(6, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31826
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EDIEADJIIAJ_m1FD9A876DAD96F10EB026F7AF39EFBCDFF6D21DC_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31827
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OPBMJCEJFMN_m245A2905B5833CFD6462CCD06C78D9AB58A8B855_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/6));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31828
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AJEDDKANNDN_mE3B258D006B81183FD35C65A86046971A0E8EE15_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/3));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/7));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31829
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2__ctor_mADAB561980E89586BD5E766312D1F481285AAFFA_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_OHLPGKNKGAN, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	{
		RuntimeObject* L_0 = (RuntimeObject*)il2cpp_codegen_object_new(RuntimeObject_il2cpp_TypeInfo_var);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(L_0, NULL);
		__this->___JFJKJMPDHBP = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___JFJKJMPDHBP), (void*)L_0);
		((  void (*) (PriorityQueue_2_t9555CB0424B0996419B3956C602674744D97CFFE*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 19)))((PriorityQueue_2_t9555CB0424B0996419B3956C602674744D97CFFE*)__this, il2cpp_rgctx_method(method->klass->rgctx_data, 19));
		RuntimeObject* L_1 = __this->___JFJKJMPDHBP;
		V_0 = L_1;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0037:
			{
				{
					bool L_2 = V_1;
					if (!L_2)
					{
						goto IL_0040;
					}
				}
				{
					RuntimeObject* L_3 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_3, NULL);
				}

IL_0040:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_4 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_4, (&V_1), NULL);
			int32_t L_5 = ___0_OHLPGKNKGAN;
			__this->___EOLMCKGJILD = L_5;
			int32_t L_6 = ___0_OHLPGKNKGAN;
			JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)L_6);
			__this->___ODDLHPPPHME = L_7;
			Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_7);
			goto IL_0041;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0041:
	{
		return;
	}
}
// Method Definition Index: 31830
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KFEOKCAGMCA_mB3F342920B8E3F93CF6C107832BE81118F46238B_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/6));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31831
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_ENFDLKDNPDK_m24661003BE0DB9FF309B5F9074F9E9E836CD00AD_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (483.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31832
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_NMJEOOFCEBC_m291CE5991959ED8BA80BFD5F93A3E8ADED37B43A_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31833
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JGHEDJHEEAM_m6651A5337878B30B9CD70AA516A3279D8A054CAA_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
	const Il2CppFullySharedGenericAny L_8 = L_7;
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
	memset(V_2, 0, SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0041;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				NullCheck((PriorityQueue_2_t9555CB0424B0996419B3956C602674744D97CFFE*)__this);
				int32_t L_4;
				L_4 = VirtualFuncInvoker0< int32_t >::Invoke(6, (PriorityQueue_2_t9555CB0424B0996419B3956C602674744D97CFFE*)__this);
				if (L_4)
				{
					goto IL_0024_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral015D605F32698B0A0547B228A08659E95DAC9484)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
			}

IL_0024_1:
			{
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
				NullCheck(L_6);
				il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),1)), SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
				il2cpp_codegen_memcpy(V_2, L_7, SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
				goto IL_0042;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
		return;
	}
}
// Method Definition Index: 31834
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KKCJALMINIL_mEDFE8A00728F8D6C95F794822248BBFA5B1561EB_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (397.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31835
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DCDNHMPEDAF_m14DAD02ECA3DD7550FA08F4D2BA38F08F472FCB6_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/4))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31836
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_FDMMCODPFKB_m06447A1FBC3501A20A019E5AF3A2FEC17485D6E2_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31837
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PCKKALPIMEC_mF0EC345A40CB46D7194278CBC4D27D06161DEB55_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/0));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31838
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EAECNLBGBJE_mB5CACABCF400129BC4982A73D7434D780CE33530_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1.5)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31839
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BLODIFEKLFN_mA1C840C246646FB8499519E994A06EC49DC008A4_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31840
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AMHMFDPKJID_m9EAAC229D01D572C1A34A300DD599F559ECA8E87_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (551.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31841
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EIIGCBEOMFH_m71ECEE1F4EFB071CC7AE257BA962C849EEE3B019_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/8))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31842
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OCNPOOIMDCJ_mF845963A1C70AFFE310C47FAC57A414D54C10FFA_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31843
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_CFGMNJFGFCA_m1EFB309180B2A98A70374B76862A78DF5DA8B52F_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(4, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31844
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_FJDPMHHJPME_m035A83F525037E61B3E0E9651F8BAE1B90C43E8C_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (26.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31845
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HeapPriorityQueue_2_GetEnumerator_m47573CF95426BE03163B6E5149E96CEA4909F8FD_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	RuntimeObject* V_2 = NULL;
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_001a:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0023;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0023:
				{
					return;
				}
			}
		});
		try
		{
			RuntimeObject* L_3 = V_0;
			Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
			OKCNJOLDHEJ_tD2C23987ADE94705468A04F3AC7E4CD2BE2D632A* L_4 = (OKCNJOLDHEJ_tD2C23987ADE94705468A04F3AC7E4CD2BE2D632A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->klass->rgctx_data, 22));
			((  void (*) (OKCNJOLDHEJ_tD2C23987ADE94705468A04F3AC7E4CD2BE2D632A*, HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 23)))(L_4, __this, il2cpp_rgctx_method(method->klass->rgctx_data, 23));
			V_2 = (RuntimeObject*)L_4;
			goto IL_0024;
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0024:
	{
		RuntimeObject* L_5 = V_2;
		return L_5;
	}
}
// Method Definition Index: 31846
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BPGEOBAOIAE_m9EF16E472726C3AF9D813358D3B505225FD074E7_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/6));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/4));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31847
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AIKLJDODOGF_mC9DCE749BF746BB632F73FE7B570539CB7C41876_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(2, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(3, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31848
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PHNEHCLBBJF_mE942ADC983917EEACC8B5EDE49A1E817591061F2_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(4, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(6, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31849
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_HNMHBOCEFDJ_mD7D3713FF4FF41CEB5B46A10DC86C76B5A585D0C_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31850
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JMCKJGLIEOH_mA1F63F53C158D2F06CB0A5683D60FF2B72B9F5CA_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/5));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/4));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)0)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31851
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BANJOOOMBJK_m97BFE3F1FEABB47FB5236E73FC39DFAF5BF8A505_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)1)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31852
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EOIMFFBGIBJ_m80714ABB402131AC21DD0C3052B8B1DD849FA7A2_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/4));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/8));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31853
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JHMBDAKMGJN_mB1D3DA3C264D69D8545FA71663D78CA3A541FFB8_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/4));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/3));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31854
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MJBDILHPGGI_mE2094AF163D044617F9BB9326BE0304CB16E7782_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/3))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31855
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_FEBLABCEFNN_mF6117E91E535148D9ACFCD28385E687FE0E27262_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/0));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/2));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31856
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2__ctor_mAA3290FB1DCA649E7BC7BB142FE397D8F8759A2F_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	{
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 25)))(__this, ((int32_t)20), il2cpp_rgctx_method(method->klass->rgctx_data, 25));
		return;
	}
}
// Method Definition Index: 31857
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_CCAMNNCBCIM_m347C0193A91CFE94F80EF6DA613E0419010AEDE8_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31858
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IEIDNKAMMDO_m6D974F27754DE9FB1FEF901AA4085DFD2991B076_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_8 = L_7;
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	memset(V_2, 0, SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0038:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_0041;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_0041:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				int32_t L_4 = __this->___BDAICNLNLCB;
				if (L_4)
				{
					goto IL_0024_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral015D605F32698B0A0547B228A08659E95DAC9484)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
			}

IL_0024_1:
			{
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
				NullCheck(L_6);
				il2cpp_codegen_memcpy(L_7, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
				il2cpp_codegen_memcpy(V_2, L_7, SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
				goto IL_0042;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0042:
	{
		il2cpp_codegen_memcpy(L_8, V_2, SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_8, SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		return;
	}
}
// Method Definition Index: 31859
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_INLOFNDBAJG_m51F358B2FBC1C6917A4F7976A112557A1770AA60_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31860
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PCFOCEEFKGD_m8FFC3ADAF626967EE355B566D17706F91F333BB3_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/8));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/0));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31861
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_BHIJEBBGKBF_m7EB7259275A8E1DDF3D989336B2962A5823A42E9_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31862
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_OEMLPMKPFHI_mF96F5CB5988A57B93EA6480B1A41269D9CCEA8C5_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(6, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(2, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31863
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MPHEOMMIFOA_mD42D7E1EB37456AAC11CEA69649D6AECB341651B_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (373.0)))));
		V_0 = L_1;
		V_1 = 0;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 1));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31864
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_MILOMDBDGAA_m09B966DC0043B1138D3325DFEC6EC9E0D7BD170B_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/6))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31865
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_GLCGPDFOEFO_m20A971A092902411CF0D4B09C5B0051E72DA4AE6_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/6));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/1));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31866
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_ODLJGBHLDGA_m2BC5E96066947AF6E83156E6A7E84516FFC9C11D_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31867
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JOEHCJFEBIH_m41649619196DD07C160355FD7C5444DDA176F663_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_7 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* V_0 = NULL;
	int32_t V_1 = 0;
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		NullCheck(L_0);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_1 = (JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)(JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869*)SZArrayNew(il2cpp_rgctx_data(method->klass->rgctx_data, 11), (uint32_t)il2cpp_codegen_cast_double_to_int<int32_t>(((double)il2cpp_codegen_multiply(((double)((int32_t)(((RuntimeArray*)L_0)->max_length))), (1684.0)))));
		V_0 = L_1;
		V_1 = 1;
		goto IL_0035;
	}

IL_001e:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_2 = V_0;
		int32_t L_3 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		il2cpp_codegen_memcpy(L_7, (L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_2);
		il2cpp_codegen_memcpy((L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), L_7, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_2)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_3)), (void*)L_7);
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_8, 0));
	}

IL_0035:
	{
		int32_t L_9 = V_1;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length)))))
		{
			goto IL_001e;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_11 = V_0;
		__this->___ODDLHPPPHME = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ODDLHPPPHME), (void*)L_11);
		return;
	}
}
// Method Definition Index: 31868
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DIFALBLNAOD_m1D79E5B5FC39C1A1CC2A27EC475C125D5EDCC7A4_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(8, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(3, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31869
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IGIOGIBBCEM_m938CD30AAD3B3663CDD7EB8DC146A7926CB0D3AD_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(3, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(7, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31870
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_EFFADCGGFJH_mA251D8796B327F7CF16A8F237046593565541FD6_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/3));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/5));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31871
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_HONOMEKDFPG_m0D5E517BEC7031558614C8D8E0DA10E672C82198_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(8, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(1, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31872
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KDKKHEPGHEG_m2A2F9B7B70DDC9EA96954E53E9894F30307CC780_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 0));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 1));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/5))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31873
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_AIHHFMOOEKJ_m10F4EA4105E6CD9201506FDE7E75B2B1AF0DC8C7_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31874
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_LILCNIGLAAG_m8B0F645DAAD0FA8C974BEC331018226A13D58EB4_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/7));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/3));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)1)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31875
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IDNDPGCCCGA_m29BB2BC6F31A27FF8A2331474E9FD90ACAB63FEB_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, int32_t ___1_IILFFHPFEBP, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_3 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_9 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_12 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD V_0 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	memset(V_0, 0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_0 = __this->___ODDLHPPPHME;
		int32_t L_1 = ___0_PKIIEEGPFLH;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		il2cpp_codegen_memcpy(L_3, (L_0)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_2)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		il2cpp_codegen_memcpy(V_0, L_3, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = ___0_PKIIEEGPFLH;
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___1_IILFFHPFEBP;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		il2cpp_codegen_memcpy(L_9, (L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_4);
		il2cpp_codegen_memcpy((L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), L_9, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5)), (void*)L_9);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_10 = __this->___ODDLHPPPHME;
		int32_t L_11 = ___1_IILFFHPFEBP;
		il2cpp_codegen_memcpy(L_12, V_0, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		NullCheck(L_10);
		il2cpp_codegen_memcpy((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), L_12, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)), (void*)L_12);
		return;
	}
}
// Method Definition Index: 31876
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DINNANMLAID_m50B905B9E96282EF5B7F58B44C13B87CBE42DBBE_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(1, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(7, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31877
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_DNENFBGFGEA_m58E4B95D26AB879A50E14677B9FB14A89F8BE8F0_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(7, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 0)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)0)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(1, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
// Method Definition Index: 31878
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_JIFECIIAAGA_mEBAB006FF51FEA8EF2345D414C1B63313D0DD332_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, Il2CppFullySharedGenericAny* ___0_CPIDBPOGGJM, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 8));
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	const uint32_t SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
	const Il2CppFullySharedGenericAny L_19 = L_10;
	const JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD L_16 = alloca(SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	Il2CppFullySharedGenericAny V_2 = alloca(SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
	memset(V_2, 0, SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
	{
		RuntimeObject* L_0 = __this->___JFJKJMPDHBP;
		V_0 = L_0;
		V_1 = (bool)0;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0098:
			{
				{
					bool L_1 = V_1;
					if (!L_1)
					{
						goto IL_00a1;
					}
				}
				{
					RuntimeObject* L_2 = V_0;
					Monitor_Exit_m05B2CF037E2214B3208198C282490A2A475653FA(L_2, NULL);
				}

IL_00a1:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_3 = V_0;
				Monitor_Enter_m3CDB589DA1300B513D55FDCFB52B63E879794149(L_3, (&V_1), NULL);
				int32_t L_4 = __this->___BDAICNLNLCB;
				if (L_4)
				{
					goto IL_0024_1;
				}
			}
			{
				InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_5 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
				InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral015D605F32698B0A0547B228A08659E95DAC9484)), NULL);
				IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
			}

IL_0024_1:
			{
				Il2CppFullySharedGenericAny* L_6 = ___0_CPIDBPOGGJM;
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
				NullCheck(L_7);
				il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
				il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_6, L_8, SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_6, (void*)L_8);
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
				NullCheck(L_9);
				il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),1)), SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
				int32_t L_11 = __this->___BDAICNLNLCB;
				__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_11, 1));
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_13 = __this->___ODDLHPPPHME;
				int32_t L_14 = __this->___BDAICNLNLCB;
				NullCheck(L_13);
				int32_t L_15 = L_14;
				il2cpp_codegen_memcpy(L_16, (L_13)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15)), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
				NullCheck(L_12);
				il2cpp_codegen_memcpy((L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)), L_16, SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
				Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->klass->rgctx_data, 2), (void**)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(0)), (void*)L_16);
				JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_17 = __this->___ODDLHPPPHME;
				int32_t L_18 = __this->___BDAICNLNLCB;
				NullCheck(L_17);
				il2cpp_codegen_initobj(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_17)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_18))), SizeOf_JEAAKABOFDI_tA2BDCFC7B3C8ACE1C9A7D9ADD87220DD527ABA71);
				((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, 0, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
				il2cpp_codegen_memcpy(V_2, L_10, SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
				goto IL_00a2;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00a2:
	{
		il2cpp_codegen_memcpy(L_19, V_2, SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
		il2cpp_codegen_memcpy(il2cppRetVal, L_19, SizeOf_T_tC6151B42D233126195AA58E6E234F68544EABDAB);
		return;
	}
}
// Method Definition Index: 31879
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_PDPPFHOLFKN_mF258749EF8216C5B9F6D1432EAB61BB0D0AE8008_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_11 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = ((int32_t)(L_0/0));
		goto IL_0015;
	}

IL_0006:
	{
		int32_t L_1 = ___0_JEPACBANOJJ;
		int32_t L_2 = V_0;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = V_0;
		___0_JEPACBANOJJ = L_3;
		int32_t L_4 = V_0;
		V_0 = ((int32_t)(L_4/0));
	}

IL_0015:
	{
		int32_t L_5 = ___0_JEPACBANOJJ;
		if ((((int32_t)L_5) <= ((int32_t)0)))
		{
			goto IL_0049;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = ___0_JEPACBANOJJ;
		NullCheck(L_6);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_8 = __this->___ODDLHPPPHME;
		int32_t L_9 = V_0;
		NullCheck(L_8);
		il2cpp_codegen_memcpy(L_10, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_8)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_9))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_12;
		L_12 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_11, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_7))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_10: *(void**)L_10));
		if ((((int32_t)L_12) > ((int32_t)1)))
		{
			goto IL_0006;
		}
	}

IL_0049:
	{
		return;
	}
}
// Method Definition Index: 31880
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_KDKBBNCHOBO_m5EE4694B7C53EECF4D6DEA7242A3C3FC13416695_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_PKIIEEGPFLH, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_12 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___BDAICNLNLCB;
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = V_0;
		int32_t L_2 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_1, L_2, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_3 = __this->___BDAICNLNLCB;
		__this->___BDAICNLNLCB = ((int32_t)il2cpp_codegen_subtract(L_3, 0));
		int32_t L_4 = ___0_PKIIEEGPFLH;
		int32_t L_5 = V_0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0067;
		}
	}
	{
		int32_t L_6 = ___0_PKIIEEGPFLH;
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_7 = __this->___ODDLHPPPHME;
		int32_t L_8 = ___0_PKIIEEGPFLH;
		NullCheck(L_7);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_9 = __this->___ODDLHPPPHME;
		int32_t L_10 = ___0_PKIIEEGPFLH;
		NullCheck(L_9);
		il2cpp_codegen_memcpy(L_11, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_9)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)(L_10/0))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_13;
		L_13 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_12, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_7)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_8))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_11: *(void**)L_11));
		if ((((int32_t)L_13) >= ((int32_t)0)))
		{
			goto IL_0060;
		}
	}

IL_0058:
	{
		int32_t L_14 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 12)))(__this, L_14, il2cpp_rgctx_method(method->klass->rgctx_data, 12));
		return;
	}

IL_0060:
	{
		int32_t L_15 = ___0_PKIIEEGPFLH;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 13)))(__this, L_15, il2cpp_rgctx_method(method->klass->rgctx_data, 13));
	}

IL_0067:
	{
		return;
	}
}
// Method Definition Index: 31881
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HeapPriorityQueue_2_IICHOGABDMI_m28AD0299A2CB76FE5D926C15434442E202493A6B_gshared (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30* __this, int32_t ___0_JEPACBANOJJ, const RuntimeMethod* method) 
{
	const uint32_t SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4));
	void* L_9 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	void* L_17 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->klass->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_8 = alloca(SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
	const Il2CppFullySharedGenericAny L_16 = L_8;
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = ___0_JEPACBANOJJ;
		V_0 = L_0;
		goto IL_008f;
	}

IL_0007:
	{
		int32_t L_1 = V_0;
		V_1 = ((int32_t)il2cpp_codegen_multiply(3, L_1));
		int32_t L_2 = V_1;
		int32_t L_3 = __this->___BDAICNLNLCB;
		if ((((int32_t)L_2) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(L_3, 1)))))
		{
			goto IL_004c;
		}
	}
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_4 = __this->___ODDLHPPPHME;
		int32_t L_5 = V_1;
		NullCheck(L_4);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_6 = __this->___ODDLHPPPHME;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		il2cpp_codegen_memcpy(L_8, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_6)->GetAddressAt(static_cast<il2cpp_array_size_t>(((int32_t)il2cpp_codegen_add(L_7, 1))))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_10;
		L_10 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_9, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_4)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_5))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_8: *(void**)L_8));
		if ((((int32_t)L_10) >= ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 0));
	}

IL_004c:
	{
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_12 = __this->___ODDLHPPPHME;
		int32_t L_13 = V_0;
		NullCheck(L_12);
		JEAAKABOFDIU5BU5D_t6C1A18C77D60F013FDCD1B222BF9A459C0BF5869* L_14 = __this->___ODDLHPPPHME;
		int32_t L_15 = V_1;
		NullCheck(L_14);
		il2cpp_codegen_memcpy(L_16, il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_14)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_15))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)), SizeOf_I_tD8ABDDE3EA01247A9A75666258CDD3B8B99B768E);
		int32_t L_18;
		L_18 = ConstrainedFuncInvoker1< int32_t, Il2CppFullySharedGenericAny >::Invoke(il2cpp_rgctx_data(method->klass->rgctx_data, 4), il2cpp_rgctx_method(method->klass->rgctx_data, 6), L_17, (void*)(((Il2CppFullySharedGenericAny*)il2cpp_codegen_get_instance_field_data_pointer(((JEAAKABOFDI_t06BDAEDE8DD8A96C46A3A544F219C2FF999035FD*)(L_12)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_13))), il2cpp_rgctx_field(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 2),0)))), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->klass->rgctx_data, 4)) ? L_16: *(void**)L_16));
		if ((((int32_t)L_18) >= ((int32_t)1)))
		{
			goto IL_0088;
		}
	}
	{
		int32_t L_19 = V_0;
		int32_t L_20 = V_1;
		((  void (*) (HeapPriorityQueue_2_t44045D8CC2E40579103EA819F14FFC0F2D4A6D30*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 3)))(__this, L_19, L_20, il2cpp_rgctx_method(method->klass->rgctx_data, 3));
		int32_t L_21 = V_1;
		V_0 = L_21;
		goto IL_008f;
	}

IL_0088:
	{
		int32_t L_22 = __this->___BDAICNLNLCB;
		V_0 = L_22;
	}

IL_008f:
	{
		int32_t L_23 = V_0;
		int32_t L_24 = __this->___BDAICNLNLCB;
		if ((((int32_t)((int32_t)il2cpp_codegen_multiply(5, L_23))) < ((int32_t)L_24)))
		{
			goto IL_0007;
		}
	}
	{
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Method Definition Index: 11999
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_mC5E49C471693AD17FDBA87D8532FB0676AC0BB75_gshared_inline (Queue_1_tCA24E420CB13C6411AEFC3ECE9E62219F7937A1E* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____size;
		return L_0;
	}
}
