import os
import requests
import time

mapa = {
    0: 1, 1: 2, 2: 3,       
    3: 4, 4: 5, 5: 6,        
    6: 7, 7: 8, 8: 9,       
    9: 25, 10: 26,           
    11: 37, 12: 38,          
    13: 43, 14: 44, 15: 45,  
    16: 54, 17: 55,          
    18: 58, 19: 59,          
    20: 60, 21: 61, 22: 62,  
    23: 69, 24: 70, 25: 71,  
    26: 72, 27: 73,          
    28: 77, 29: 78,          
    30: 79, 31: 80,          
    32: 81, 33: 82,          
    34: 86, 35: 87,          
    36: 90, 37: 91,          
    38: 98, 39: 99,          
    40: 100, 41: 101,        
    42: 102, 43: 103,        
    44: 114,                 
    45: 116, 46: 117,        
    47: 118, 48: 119,        
    49: 120, 50: 121,        
    51: 125,                 
    52: 126,                 
    53: 129, 54: 130,        
    55: 131,                 
    56: 134,                 
    57: 135,                 
    58: 136,                 
    59: 145,                 
    60: 146                  
}

pasta_alvo = "lib/assets"
if not os.path.exists(pasta_alvo):
    os.makedirs(pasta_alvo)

print("baixando sprites direto para lib/assets...")

for meu_id, poke_id in mapa.items():
    url_frente = f"https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/{poke_id}.png"
    url_costas = f"https://raw.githubusercontent.com/PokeAPI/sprites/master/sprites/pokemon/back/{poke_id}.png"
    
    try:
        # baixa e sobrescreve frente
        req = requests.get(url_frente)
        with open(f"{pasta_alvo}/{meu_id}-frente.png", "wb") as f:
            f.write(req.content)
            
        # baixa e sobrescreve costas
        req = requests.get(url_costas)
        with open(f"{pasta_alvo}/{meu_id}-costas.png", "wb") as f:
            f.write(req.content)
            
        print(f"id {meu_id} atualizado")
    except Exception as e:
        print(f"erro no id {meu_id}: {e}")
        
    time.sleep(0.1)

print("finalizado")