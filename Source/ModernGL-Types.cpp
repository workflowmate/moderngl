#include "ModernGL.hpp"

PyObject * Framebuffer_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	return type->tp_alloc(type, 0);
}

PyObject * VertexArray_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	return type->tp_alloc(type, 0);
}

PyObject * VertexBuffer_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	return type->tp_alloc(type, 0);
}

PyObject * IndexBuffer_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	return type->tp_alloc(type, 0);
}

PyObject * UniformBuffer_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	return type->tp_alloc(type, 0);
}

PyObject * StorageBuffer_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	return type->tp_alloc(type, 0);
}

PyObject * Texture_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	return type->tp_alloc(type, 0);
}

PyObject * Shader_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	return type->tp_alloc(type, 0);
}

PyObject * Program_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	return type->tp_alloc(type, 0);
}

PyObject * AttributeLocation_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	return type->tp_alloc(type, 0);
}

PyObject * UniformLocation_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	return type->tp_alloc(type, 0);
}

PyObject * UniformBufferLocation_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	return type->tp_alloc(type, 0);
}

PyObject * ComputeShader_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	return type->tp_alloc(type, 0);
}

PyObject * EnableFlag_new(PyTypeObject * type, PyObject * args, PyObject * kwargs) {
	return type->tp_alloc(type, 0);
}

int Framebuffer_init(Framebuffer * self, PyObject * args, PyObject * kwargs) {
	PyErr_SetString(ModuleError, "Cannot instantiate Framebuffer.\nCall NewFramebuffer(...) to get a Framebuffer object.");
	return -1;
}

int VertexArray_init(VertexArray * self, PyObject * args, PyObject * kwargs) {
	PyErr_SetString(ModuleError, "Cannot instantiate VertexArray.\nCall NewVertexArray(...) to get a VertexArray object.");
	return -1;
}

int VertexBuffer_init(VertexBuffer * self, PyObject * args, PyObject * kwargs) {
	PyErr_SetString(ModuleError, "Cannot instantiate VertexBuffer.\nCall NewVertexBuffer(...) to get a VertexBuffer object.");
	return -1;
}

int IndexBuffer_init(IndexBuffer * self, PyObject * args, PyObject * kwargs) {
	PyErr_SetString(ModuleError, "Cannot instantiate IndexBuffer.\nCall NewIndexBuffer(...) to get a IndexBuffer object.");
	return -1;
}

int UniformBuffer_init(UniformBuffer * self, PyObject * args, PyObject * kwargs) {
	PyErr_SetString(ModuleError, "Cannot instantiate UniformBuffer.\nCall NewUniformBuffer(...) to get a UniformBuffer object.");
	return -1;
}

int StorageBuffer_init(StorageBuffer * self, PyObject * args, PyObject * kwargs) {
	PyErr_SetString(ModuleError, "Cannot instantiate StorageBuffer.\nCall NewStorageBuffer(...) to get a StorageBuffer object.");
	return -1;
}

int Texture_init(Texture * self, PyObject * args, PyObject * kwargs) {
	PyErr_SetString(ModuleError, "Cannot instantiate Texture.\nCall NewTexture(...) to get a Texture object.");
	return -1;
}

int Shader_init(Shader * self, PyObject * args, PyObject * kwargs) {
	PyErr_SetString(ModuleError, "Cannot instantiate Shader.\nCall New...Shader(...) to get a Shader object.");
	return -1;
}

int Program_init(Program * self, PyObject * args, PyObject * kwargs) {
	PyErr_SetString(ModuleError, "Cannot instantiate Program.\nCall NewProgram(...) to get a Program object.");
	return -1;
}

int AttributeLocation_init(AttributeLocation * self, PyObject * args, PyObject * kwargs) {
	PyErr_SetString(ModuleError, "Cannot instantiate AttributeLocation.\nCall GetAttributeLocation(...) to get an AttributeLocation object.");
	return -1;
}

int UniformLocation_init(UniformLocation * self, PyObject * args, PyObject * kwargs) {
	PyErr_SetString(ModuleError, "Cannot instantiate UniformLocation.\nCall GetUniformLocation(...) to get a UniformLocation object.");
	return -1;
}

int UniformBufferLocation_init(UniformBufferLocation * self, PyObject * args, PyObject * kwargs) {
	PyErr_SetString(ModuleError, "Cannot instantiate UniformBufferLocation.\nCall GetUniformBufferLocation(...) to get a UniformBufferLocation object.");
	return -1;
}

int ComputeShader_init(ComputeShader * self, PyObject * args, PyObject * kwargs) {
	PyErr_SetString(ModuleError, "Cannot instantiate ComputeShader.\nCall NewComputeShader(...) to get a ComputeShader object.");
	return -1;
}

int EnableFlag_init(EnableFlag * self, PyObject * args, PyObject * kwargs) {
	PyErr_SetString(ModuleError, "Cannot instantiate EnableFlag.");
	return -1;
}

void Framebuffer_dealloc(Framebuffer * self) {
	Py_TYPE(self)->tp_free((PyObject*)self);
}

void VertexArray_dealloc(VertexArray * self) {
	Py_TYPE(self)->tp_free((PyObject*)self);
}

void VertexBuffer_dealloc(VertexBuffer * self) {
	Py_TYPE(self)->tp_free((PyObject*)self);
}

void IndexBuffer_dealloc(IndexBuffer * self) {
	Py_TYPE(self)->tp_free((PyObject*)self);
}

void UniformBuffer_dealloc(UniformBuffer * self) {
	Py_TYPE(self)->tp_free((PyObject*)self);
}

void StorageBuffer_dealloc(StorageBuffer * self) {
	Py_TYPE(self)->tp_free((PyObject*)self);
}

void Texture_dealloc(Texture * self) {
	Py_TYPE(self)->tp_free((PyObject*)self);
}

void Shader_dealloc(Shader * self) {
	Py_TYPE(self)->tp_free((PyObject*)self);
}

void Program_dealloc(Program * self) {
	Py_TYPE(self)->tp_free((PyObject*)self);
}

void AttributeLocation_dealloc(AttributeLocation * self) {
	Py_TYPE(self)->tp_free((PyObject*)self);
}

void UniformLocation_dealloc(UniformLocation * self) {
	Py_TYPE(self)->tp_free((PyObject*)self);
}

void UniformBufferLocation_dealloc(UniformBufferLocation * self) {
	Py_TYPE(self)->tp_free((PyObject*)self);
}

void ComputeShader_dealloc(ComputeShader * self) {
	Py_TYPE(self)->tp_free((PyObject*)self);
}

void EnableFlag_dealloc(EnableFlag * self) {
	Py_TYPE(self)->tp_free((PyObject*)self);
}

PyObject * Framebuffer_str(Framebuffer * self) {
	return PyUnicode_FromFormat("<Framebuffer = %d>", self->fbo);
}

PyObject * VertexArray_str(VertexArray * self) {
	return PyUnicode_FromFormat("<VertexArray = %d>", self->vao);
}

PyObject * VertexBuffer_str(VertexBuffer * self) {
	return PyUnicode_FromFormat("<VertexBuffer = %d>", self->vbo);
}

PyObject * IndexBuffer_str(IndexBuffer * self) {
	return PyUnicode_FromFormat("<IndexBuffer = %d>", self->ibo);
}

PyObject * UniformBuffer_str(UniformBuffer * self) {
	return PyUnicode_FromFormat("<UniformBuffer = %d>", self->ubo);
}

PyObject * StorageBuffer_str(StorageBuffer * self) {
	return PyUnicode_FromFormat("<StorageBuffer = %d>", self->ssbo);
}

PyObject * Texture_str(Texture * self) {
	return PyUnicode_FromFormat("<Texture = %d>", self->texture);
}

PyObject * Shader_str(Shader * self) {
	return PyUnicode_FromFormat("<Shader = %d>", self->shader);
}

PyObject * Program_str(Program * self) {
	return PyUnicode_FromFormat("<Program = %d>", self->program);
}

PyObject * AttributeLocation_str(AttributeLocation * self) {
	return PyUnicode_FromFormat("<AttributeLocation = %d>", self->location);
}

PyObject * UniformLocation_str(UniformLocation * self) {
	return PyUnicode_FromFormat("<UniformLocation = %d>", self->location);
}

PyObject * UniformBufferLocation_str(UniformBufferLocation * self) {
	return PyUnicode_FromFormat("<UniformBufferLocation = %d>", self->location);
}

PyObject * ComputeShader_str(ComputeShader * self) {
	return PyUnicode_FromFormat("<ComputeShader = %d>", self->shader);
}

PyObject * EnableFlag_str(ComputeShader * self) {
	return PyUnicode_FromFormat("<EnableFlag: ... >");
}

PyTypeObject FramebufferType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.Framebuffer",
	sizeof(Framebuffer),
	0,
	(destructor)Framebuffer_dealloc,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(unaryfunc)Framebuffer_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"Framebuffer",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)Framebuffer_init,
	0,
	Framebuffer_new,
};

PyTypeObject VertexArrayType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.VertexArray",
	sizeof(VertexArray),
	0,
	(destructor)VertexArray_dealloc,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(unaryfunc)VertexArray_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"VertexArray",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)VertexArray_init,
	0,
	VertexArray_new,
};

PyTypeObject VertexBufferType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.VertexBuffer",
	sizeof(VertexBuffer),
	0,
	(destructor)VertexBuffer_dealloc,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(unaryfunc)VertexBuffer_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"VertexBuffer",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)VertexBuffer_init,
	0,
	VertexBuffer_new,
};

PyTypeObject IndexBufferType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.IndexBuffer",
	sizeof(IndexBuffer),
	0,
	(destructor)IndexBuffer_dealloc,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(unaryfunc)IndexBuffer_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"IndexBuffer",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)IndexBuffer_init,
	0,
	IndexBuffer_new,
};

PyTypeObject UniformBufferType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.UniformBuffer",
	sizeof(UniformBuffer),
	0,
	(destructor)UniformBuffer_dealloc,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(unaryfunc)UniformBuffer_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"UniformBuffer",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)UniformBuffer_init,
	0,
	UniformBuffer_new,
};

PyTypeObject StorageBufferType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.StorageBuffer",
	sizeof(StorageBuffer),
	0,
	(destructor)StorageBuffer_dealloc,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(unaryfunc)StorageBuffer_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"StorageBuffer",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)StorageBuffer_init,
	0,
	StorageBuffer_new,
};

PyTypeObject TextureType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.Texture",
	sizeof(Texture),
	0,
	(destructor)Texture_dealloc,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(unaryfunc)Texture_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"Texture",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)Texture_init,
	0,
	Texture_new,
};

PyTypeObject ShaderType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.Shader",
	sizeof(Shader),
	0,
	(destructor)Shader_dealloc,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(unaryfunc)Shader_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"Shader",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)Shader_init,
	0,
	Shader_new,
};

PyTypeObject ProgramType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.Program",
	sizeof(Program),
	0,
	(destructor)Program_dealloc,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(unaryfunc)Program_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"Program",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)Program_init,
	0,
	Program_new,
};

PyTypeObject AttributeLocationType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.AttributeLocation",
	sizeof(AttributeLocation),
	0,
	(destructor)AttributeLocation_dealloc,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(unaryfunc)AttributeLocation_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"AttributeLocation",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)AttributeLocation_init,
	0,
	AttributeLocation_new,
};

PyTypeObject UniformLocationType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.UniformLocation",
	sizeof(UniformLocation),
	0,
	(destructor)UniformLocation_dealloc,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(unaryfunc)UniformLocation_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"UniformLocation",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)UniformLocation_init,
	0,
	UniformLocation_new,
};

PyTypeObject UniformBufferLocationType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.UniformBufferLocation",
	sizeof(UniformBufferLocation),
	0,
	(destructor)UniformBufferLocation_dealloc,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(unaryfunc)UniformBufferLocation_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"UniformBufferLocation",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)UniformBufferLocation_init,
	0,
	UniformBufferLocation_new,
};

PyTypeObject ComputeShaderType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.ComputeShader",
	sizeof(ComputeShader),
	0,
	(destructor)ComputeShader_dealloc,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(unaryfunc)ComputeShader_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"ComputeShader",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)ComputeShader_init,
	0,
	ComputeShader_new,
};

PyObject * OperatorNotImplemented() {
	Py_RETURN_NOTIMPLEMENTED;
}

PyNumberMethods EnableFlag_num = {
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_add;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_subtract;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_multiply;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_remainder;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_divmod;
	(ternaryfunc)OperatorNotImplemented, // ternaryfunc nb_power;
	(unaryfunc)OperatorNotImplemented, // unaryfunc nb_negative;
	(unaryfunc)OperatorNotImplemented, // unaryfunc nb_positive;
	(unaryfunc)OperatorNotImplemented, // unaryfunc nb_absolute;
	(inquiry)OperatorNotImplemented, // inquiry nb_bool;
	(unaryfunc)OperatorNotImplemented, // unaryfunc nb_invert;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_lshift;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_rshift;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_and;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_xor;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_or;
	(unaryfunc)OperatorNotImplemented, // unaryfunc nb_int;
	0, // void *nb_reserved;  /* the slot formerly known as nb_long */
	(unaryfunc)OperatorNotImplemented, // unaryfunc nb_float;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_inplace_add;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_inplace_subtract;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_inplace_multiply;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_inplace_remainder;
	(ternaryfunc)OperatorNotImplemented, // ternaryfunc nb_inplace_power;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_inplace_lshift;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_inplace_rshift;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_inplace_and;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_inplace_xor;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_inplace_or;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_floor_divide;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_true_divide;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_inplace_floor_divide;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_inplace_true_divide;
	(unaryfunc)OperatorNotImplemented, // unaryfunc nb_index;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_matrix_multiply;
	(binaryfunc)OperatorNotImplemented, // binaryfunc nb_inplace_matrix_multiply;
};

PyTypeObject EnableFlagType = {
	PyVarObject_HEAD_INIT(0, 0)
	"ModernGL.EnableFlag",
	sizeof(EnableFlag),
	0,
	(destructor)EnableFlag_dealloc,
	0,
	0,
	0,
	0,
	0,
	&EnableFlag_num,
	0,
	0,
	0,
	0,
	(unaryfunc)EnableFlag_str,
	0,
	0,
	0,
	Py_TPFLAGS_DEFAULT | Py_TPFLAGS_BASETYPE,
	"EnableFlag",
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	0,
	(initproc)EnableFlag_init,
	0,
	EnableFlag_new,
};

PyObject * CreateFramebufferType(int fbo, int color, int depth) {
	Framebuffer * obj = (Framebuffer *)FramebufferType.tp_alloc(&FramebufferType, 0);

	if (obj != 0) {
		obj->fbo = fbo;
		obj->color = color;
		obj->depth = depth;
	}

	return (PyObject *)obj;
}

PyObject * CreateVertexArrayType(int vao, bool indexed) {
	VertexArray * obj = (VertexArray *)VertexArrayType.tp_alloc(&VertexArrayType, 0);

	if (obj != 0) {
		obj->vao = vao;
		obj->indexed = indexed;
	}

	return (PyObject *)obj;
}

PyObject * CreateVertexBufferType(int vbo) {
	VertexBuffer * obj = (VertexBuffer *)VertexBufferType.tp_alloc(&VertexBufferType, 0);

	if (obj != 0) {
		obj->vbo = vbo;
	}

	return (PyObject *)obj;
}

PyObject * CreateIndexBufferType(int ibo) {
	IndexBuffer * obj = (IndexBuffer *)IndexBufferType.tp_alloc(&IndexBufferType, 0);

	if (obj != 0) {
		obj->ibo = ibo;
	}

	return (PyObject *)obj;
}

PyObject * CreateUniformBufferType(int ubo) {
	UniformBuffer * obj = (UniformBuffer *)UniformBufferType.tp_alloc(&UniformBufferType, 0);

	if (obj != 0) {
		obj->ubo = ubo;
	}

	return (PyObject *)obj;
}

PyObject * CreateStorageBufferType(int ssbo, int size) {
	StorageBuffer * obj = (StorageBuffer *)StorageBufferType.tp_alloc(&StorageBufferType, 0);

	if (obj != 0) {
		obj->ssbo = ssbo;
		obj->size = size;
	}

	return (PyObject *)obj;
}

PyObject * CreateTextureType(int texture, int components) {
	Texture * obj = (Texture *)TextureType.tp_alloc(&TextureType, 0);

	if (obj != 0) {
		obj->texture = texture;
		obj->components = components;
	}

	return (PyObject *)obj;
}

PyObject * CreateShaderType(int shader, ShaderCategory category) {
	Shader * obj = (Shader *)ShaderType.tp_alloc(&ShaderType, 0);

	if (obj != 0) {
		obj->shader = shader;
		obj->category = category;
	}

	return (PyObject *)obj;
}

PyObject * CreateProgramType(int program) {
	Program * obj = (Program *)ProgramType.tp_alloc(&ProgramType, 0);

	if (obj != 0) {
		obj->program = program;
	}

	return (PyObject *)obj;
}

PyObject * CreateAttributeLocationType(int location) {
	AttributeLocation * obj = (AttributeLocation *)AttributeLocationType.tp_alloc(&AttributeLocationType, 0);

	if (obj != 0) {
		obj->location = location;
	}

	return (PyObject *)obj;
}

PyObject * CreateUniformLocationType(int location) {
	UniformLocation * obj = (UniformLocation *)UniformLocationType.tp_alloc(&UniformLocationType, 0);

	if (obj != 0) {
		obj->location = location;
	}

	return (PyObject *)obj;
}

PyObject * CreateUniformBufferLocationType(int location) {
	UniformBufferLocation * obj = (UniformBufferLocation *)UniformBufferLocationType.tp_alloc(&UniformBufferLocationType, 0);

	if (obj != 0) {
		obj->location = location;
	}

	return (PyObject *)obj;
}

PyObject * CreateComputeShaderType(int shader, int program) {
	ComputeShader * obj = (ComputeShader *)ComputeShaderType.tp_alloc(&ComputeShaderType, 0);

	if (obj != 0) {
		obj->shader = shader;
		obj->program = program;
	}

	return (PyObject *)obj;
}

PyObject * CreateEnableFlagType(unsigned value) {
	EnableFlag * obj = (EnableFlag *)EnableFlagType.tp_alloc(&EnableFlagType, 0);

	if (obj != 0) {
		obj->value = value;
	}

	return (PyObject *)obj;
}
