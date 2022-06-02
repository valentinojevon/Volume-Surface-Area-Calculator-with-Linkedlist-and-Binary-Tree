void sorting(int m, int n, int k, float volumegeo[], float luasgeo[], float luasplane[]){
	float temp;
	int i, j;
	for(i = 0; i < m; i++){
		for(j = 0; j < m; j++){
	        if(volumegeo[i] < volumegeo[j]){
	            temp = volumegeo[i];
	            volumegeo[i] = volumegeo[j];
	            volumegeo[j] = temp;
	        }
	    }
	}
	for(i = 0; i < n; i++){
		for(j = 0; j < n; j++){
	        if(luasgeo[i] < luasgeo[j]){
	            temp = luasgeo[i];
	            luasgeo[i] = luasgeo[j];
	            luasgeo[j] = temp;
	        }
	    }
	}
	for(i = 0; i < k; i++){
		for(j = 0; j < k; j++){
	        if(luasplane[i] < luasplane[j]){
	            temp = luasplane[i];
	            luasplane[i] = luasplane[j];
	            luasplane[j] = temp;
	        }
	    }
	}
}
