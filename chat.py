from openai import OpenAI

client = OpenAI()

prompt = input("prompt: ")
system_output = "limit your answers to one question, pretend you are a cat"

response = client.responses.create (
    input = prompt,
    instructions = system_output
    model = "gpt-5"
)

print(response.output_text)