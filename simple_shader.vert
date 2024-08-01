#version 450

vec2 positions[3] = vec2[] (
	vec2(-0.8,-0.5),
	vec2(0.1,-0.3),
	vec2(-0.4,-0.2)
);

void main(){
	gl_Position = vec4(positions[gl_VertexIndex], 0.0, 1.0);
}