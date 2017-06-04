struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_CloudWebServices();
	RegisterModule_CloudWebServices();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UnityConnect();
	RegisterModule_UnityConnect();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

	void RegisterModule_UnityWebRequest();
	RegisterModule_UnityWebRequest();

}

void RegisterAllClasses()
{
	//Total: 58 classes
	//0. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//1. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//2. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//3. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//4. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//5. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//6. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//7. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//8. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//9. Rigidbody2D
	void RegisterClass_Rigidbody2D();
	RegisterClass_Rigidbody2D();

	//10. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//11. BoxCollider2D
	void RegisterClass_BoxCollider2D();
	RegisterClass_BoxCollider2D();

	//12. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//13. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//14. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//15. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//16. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//17. AudioSource
	void RegisterClass_AudioSource();
	RegisterClass_AudioSource();

	//18. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//19. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//20. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//21. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//22. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//23. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//24. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//25. Texture2DArray
	void RegisterClass_Texture2DArray();
	RegisterClass_Texture2DArray();

	//26. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//27. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//28. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//29. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//30. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//31. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//32. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//33. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//34. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//35. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//36. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//37. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//38. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//39. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//40. CircleCollider2D
	void RegisterClass_CircleCollider2D();
	RegisterClass_CircleCollider2D();

	//41. PhysicsMaterial2D
	void RegisterClass_PhysicsMaterial2D();
	RegisterClass_PhysicsMaterial2D();

	//42. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//43. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//44. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//45. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//46. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//47. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//48. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//49. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//50. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//51. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//52. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//53. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//54. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//55. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

	//56. CloudWebServicesManager
	void RegisterClass_CloudWebServicesManager();
	RegisterClass_CloudWebServicesManager();

	//57. UnityConnectSettings
	void RegisterClass_UnityConnectSettings();
	RegisterClass_UnityConnectSettings();

}
